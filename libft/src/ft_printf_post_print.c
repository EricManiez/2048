/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_post_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:50:26 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 17:52:03 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_post_print(char *cs, char **s, va_list ap)
{
	va_list	cpy;
	size_t	len;
	size_t	width;
	char	*d;

	d = "";
	va_copy(cpy, ap);
	len = ft_printf_len_calc(cpy, cs);
	width = ft_printf_width_parse(cs);
	va_end(cpy);
	va_copy(cpy, ap);
	if (ft_strchr(cs, 'p'))
		width -= 2;
	if (width > len && ft_strchr(cs, '-'))
	{
		ft_strpadding(width - len - ft_printf_sign_print(cs, &d, cpy), ' ', s);
		if (d[0])
			free(d);
	}
	va_end(cpy);
}
