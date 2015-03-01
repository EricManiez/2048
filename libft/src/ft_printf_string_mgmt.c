/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string_mgmt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:31:35 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 17:30:08 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_string_mgmt(char **s, va_list ap, char *cs)
{
	va_list	cpy;

	va_copy(cpy, ap);
	if (va_arg(cpy, char*))
	{
		if (ft_strchr(cs, '.'))
			*(s) = ft_strjoin(*(s), ft_strsub(va_arg(ap, char*),
						0, ft_printf_prec_parse(cs)));
		else
			*(s) = ft_strjoin(*(s), va_arg(ap, char*));
	}
	else
		*(s) = ft_strjoin(*(s), "(null)");
	va_end(cpy);
}
