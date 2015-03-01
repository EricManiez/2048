/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 15:56:25 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 15:46:49 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	char	*str;
	va_list	ap;

	str = "";
	va_start(ap, format);
	ft_printf_read_loop(&str, ap, (char*)format);
	write(1, str, ft_strlen(str));
	va_end(ap);
	return (ft_strlen(str));
}
