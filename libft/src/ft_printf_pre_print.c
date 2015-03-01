/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pre_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:26:24 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 17:29:36 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_pre_print(char *cs, char **s, va_list ap)
{
	va_list	cpy;
	size_t	len;
	size_t	width;
	int		prec;
	int		prec_stock;

	prec = ft_printf_prec_parse(cs);
	va_copy(cpy, ap);
	len = ft_printf_len_calc(cpy, cs);
	va_end(cpy);
	prec_stock = prec - len;
	width = ft_printf_width_parse(cs);
	va_copy(cpy, ap);
	if ((ft_strchrstr(cs, "dDioOxXup") && prec > (int)len)
			|| (ft_strchrstr(cs, "sS") && prec >= 0 && prec < (int)len))
		len = prec;
	ft_printf_width_mgmt(cs, s, cpy, width - len);
	if (width < len || ft_strchr(cs, '-') || ft_strchr(cs, '-'))
		ft_printf_sign_print(cs, s, cpy);
	va_end(cpy);
	if (ft_strchrstr(cs, "dDioOxXup") && prec >= 0 && prec_stock > 0)
		ft_strpadding(prec_stock, '0', s);
}
