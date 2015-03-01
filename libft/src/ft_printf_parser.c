/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 09:11:36 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 09:33:19 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_parser(const char *format, char **ret, char **cs, int prog)
{
	ft_bzero(*(cs), ft_strlen((const char*)*(cs)));
	while (format[++prog] && format[prog] != '%')
		*(ret) = ft_charjoin(*(ret), format[prog]);
	if (!format[prog])
		return (0);
	while (format[++prog] && ft_strchr(PRINTF_CHARS, format[prog]))
	{
		*(cs) = ft_charjoin(*(cs), format[prog]);
		if (ft_strchr(CONV_SPEC, format[prog]))
			return (prog);
	}
	if (!format[prog])
		return (0);
	*(cs) = ft_charjoin(*(cs), format[prog]);
	return (prog);
}
