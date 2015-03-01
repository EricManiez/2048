/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 11:54:59 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/19 13:38:28 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned long n)
{
	char	*res;

	res = "";
	if (n == 0)
		return (ft_charjoin(res, '0'));
	while (n)
	{
		res = ft_charjoin(res, n % 10 + 48);
		n = n / 10;
	}
	return (ft_strrev(res));
}
