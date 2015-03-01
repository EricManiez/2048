/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sign_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 10:10:00 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 14:41:29 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_sign_print(char *cs, char **s, va_list cpy)
{
	if (va_arg(cpy, int) < 0 && ft_strchrstr(cs, "dDi"))
		ft_strpadding(1, '-', s);
	else if (ft_strchr(cs, '+') && ft_strchrstr(cs, "dDi"))
		ft_strpadding(1, '+', s);
	else if (ft_strchr(cs, ' ') && ft_strchrstr(cs, "dDi"))
		ft_strpadding(1, ' ', s);
	else
		return (0);
	return (1);
}
