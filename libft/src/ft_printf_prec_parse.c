/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prec_parse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 09:56:07 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 13:25:17 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf_prec_parse(char *cs)
{
	char	*prec;

	prec = "";
	while (*cs && *cs != '.')
		cs++;
	if (!*cs)
		return (-1);
	while (*(++cs) && ft_isdigit(*cs))
		prec = ft_charjoin(prec, *cs);
	if (!prec[0])
		return (0);
	return (ft_atoi(prec));
}
