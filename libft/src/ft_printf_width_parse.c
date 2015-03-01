/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width_parse.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:29:38 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/22 10:05:27 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_printf_width_parse(char *cs)
{
	char	*width;

	width = "";
	while (*cs && *cs != '.' && (!ft_isdigit(*cs) || *cs == '0'))
		cs++;
	while (*cs && ft_isdigit(*cs))
	{
		width = ft_charjoin(width, *cs);
		cs++;
	}
	return (ft_atoi(width));
}
