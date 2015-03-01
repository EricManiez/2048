/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sign_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:56:36 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 11:20:23 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_mem_marker(char **s, char *cs, va_list cpy, int phase)
{
	va_list	cpy2;

	va_copy(cpy2, cpy);
	if (phase == 1)
	{
		if (ft_strchrstr(cs, "Xx") && va_arg(cpy2, unsigned long) > 0)
			return (2);
		else if (ft_strchr(cs, 'p'))
			return (2);
	}
	if (phase == 2)
	{
		if (ft_strchrstr(cs, "Xx") && va_arg(cpy2, unsigned long) > 0)
		{
			if (ft_isupper(cs[ft_strlen(cs) - 1]))
				*(s) = ft_strjoin(*(s), "0X");
			else
				*(s) = ft_strjoin(*(s), "0x");
		}
		else if (ft_strchr(cs, 'p'))
			*(s) = ft_strjoin(*(s), "0x");
	}
	va_end(cpy2);
	return (0);
}

void		ft_printf_width_mgmt(char *cs, char **s, va_list cpy, int width)
{
	int		i;
	va_list	cpy2;

	va_copy(cpy2, cpy);
	i = -1;
	while (cs[++i] && !ft_isdigit(cs[i]) && cs[i] != '.')
		;
	if (ft_strchr(cs, 'p') || (ft_strchrstr(cs, "xX") && ft_strchr(cs, '#')))
		width -= hex_mem_marker(s, cs, cpy, 1);
	if (cs[i] != '0' && !ft_strchr(cs, '-') && width > 0)
	{
		ft_strpadding(width - 1, ' ', s);
		if (va_arg(cpy2, int) < 0 && ft_strchrstr(cs, "dDi"))
			ft_strpadding(1, '-', s);
		else if (ft_strchr(cs, '+') && ft_strchrstr(cs, "dDi"))
			ft_strpadding(1, '+', s);
		else
			ft_strpadding(1, ' ', s);
	}
	if (ft_strchr(cs, 'p') || (ft_strchrstr(cs, "xX") && ft_strchr(cs, '#')))
		hex_mem_marker(s, cs, cpy, 2);
	if (cs[i] == '0' && !ft_strchr(cs, '-') && width > 0)
		ft_strpadding(width - ft_printf_sign_print(cs, s, cpy), '0', s);
	va_end(cpy2);
}
