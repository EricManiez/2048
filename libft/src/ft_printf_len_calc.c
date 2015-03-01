/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_len_calc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:33:15 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 14:36:33 by emaniez          ###   ########.fr       */
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

size_t		ft_printf_len_calc(va_list cpy, char *cs)
{
	char	*s;

	s = "";
	if (ft_strchr("Ss", cs[ft_strlen(cs) - 1]))
		ft_printf_string_mgmt(&s, cpy, cs);
	else if (ft_strchr("p", cs[ft_strlen(cs) - 1]))
		s = ft_strjoin(s, ft_dec2hex((unsigned long)va_arg(cpy, void*), 0, 0));
	else if (ft_strchr("dDi", cs[ft_strlen(cs) - 1]))
		s = ft_strjoin(s, ft_printf_itoa((int)va_arg(cpy, long), 1));
	else if (ft_strchr("oO", cs[ft_strlen(cs) - 1]))
		oct_conv_sub(&s, cs, cpy);
	else if (ft_strchr("xX", cs[ft_strlen(cs) - 1]))
		hex_conv_sub(&s, cs, cpy);
	else if (ft_strchr("uU", cs[ft_strlen(cs) - 1]))
		s = ft_strjoin(s, ft_uitoa(va_arg(cpy, unsigned long)));
	else if (ft_strchr("cC", cs[ft_strlen(cs) - 1]))
		s = ft_charjoin(s, va_arg(cpy, int));
	else
		s = ft_charjoin(s, cs[ft_strlen(cs) - 1]);
	va_end(cpy);
	return (ft_strlen(s));
}
