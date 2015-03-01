/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 10:26:09 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:48:30 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_oct_conv(unsigned long int dec, int lead_0)
{
	unsigned long	mid;
	char			*oct;

	oct = "";
	if (dec == 0)
		oct = "0";
	while (dec)
	{
		mid = dec % 8;
		oct = ft_strjoin(oct, ft_itoa(mid));
		dec /= 8;
	}
	if (lead_0)
		oct = ft_charjoin(oct, '0');
	return (ft_strrev(oct));
}
