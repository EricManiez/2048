/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:03:28 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 11:07:40 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstcp;
	const char		*srccp;
	unsigned char	ccp;
	unsigned int	i;

	dstcp = (unsigned char*)dst;
	srccp = (const char*)src;
	ccp = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		dstcp[i] = srccp[i];
		if (dstcp[i] == ccp)
			return (&dstcp[i + 1]);
	}
	return (NULL);
}
