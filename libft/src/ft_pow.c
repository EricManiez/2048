/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:39:23 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 15:36:44 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int base, int power)
{
	int		result;

	result = base;
	if (power == 0)
		return (1);
	while (--power > 0)
		result = result * base;
	return (result);
}
