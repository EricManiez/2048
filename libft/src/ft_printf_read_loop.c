/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_read_loop.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 12:04:15 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 15:46:55 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_read_loop(char **str, va_list ap, char *format)
{
	char	*cs;
	int		prog;

	prog = -1;
	cs = "";
	while ((prog = ft_printf_parser(format, str, &cs, prog)))
	{
		if (cs[0])
			ft_printf_typedef(cs, str, ap);
	}
}
