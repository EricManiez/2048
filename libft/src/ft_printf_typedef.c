/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_typedef.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 11:12:22 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 14:36:11 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	oct_conv_sub(char **s, char *cs, va_list ap)
{
	va_list	cpy;

	va_copy(cpy, ap);
	if (ft_strchr(cs, '#') && va_arg(cpy, unsigned long) > 0)
		*(s) = ft_strjoin(*(s), ft_oct_conv(va_arg(ap, unsigned long), 1));
	else
		*(s) = ft_strjoin(*(s), ft_oct_conv(va_arg(ap, unsigned long), 0));
	va_end(cpy);
}

static void	hex_conv_sub(char **s, char *cs, va_list ap)
{
	va_list	cpy;

	va_copy(cpy, ap);
	*(s) = ft_strjoin(*(s), ft_dec2hex(va_arg(ap, unsigned long),
					0, cs[ft_strlen(cs) - 1]));
	va_end(cpy);
}

void		ft_printf_typedef(char *cs, char **s, va_list ap)
{
	va_list	cpy;

	va_copy(cpy, ap);
	ft_printf_pre_print(cs, s, cpy);
	if (ft_strchr("Ss", cs[ft_strlen(cs) - 1]))
		ft_printf_string_mgmt(s, ap, cs);
	else if (ft_strchr("p", cs[ft_strlen(cs) - 1]))
		*(s) = ft_strjoin(*(s),
				ft_dec2hex((unsigned long)va_arg(ap, void*), 0, 0));
	else if (ft_strchr("dDi", cs[ft_strlen(cs) - 1]))
		*(s) = ft_strjoin(*(s), ft_printf_itoa((int)va_arg(ap, long), 1));
	else if (ft_strchr("oO", cs[ft_strlen(cs) - 1]))
		oct_conv_sub(s, cs, ap);
	else if (ft_strchr("xX", cs[ft_strlen(cs) - 1]))
		hex_conv_sub(s, cs, ap);
	else if (ft_strchr("uU", cs[ft_strlen(cs) - 1]))
		*(s) = ft_strjoin(*(s), ft_uitoa(va_arg(ap, unsigned long)));
	else if (ft_strchr("cC", cs[ft_strlen(cs) - 1]))
		*(s) = ft_charjoin(*(s), va_arg(ap, int));
	else
		*(s) = ft_charjoin(*(s), cs[ft_strlen(cs) - 1]);
	ft_printf_post_print(cs, s, cpy);
	va_end(cpy);
}
