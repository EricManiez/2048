/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:42:06 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/07 13:28:34 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = -1;
	if (size > (dstlen + 1))
	{
		while (++i < (size - dstlen - 1))
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = '\0';
	}
	if (size >= dstlen)
		return (dstlen + ft_strlen(src));
	return ((dstlen + srclen) - (dstlen - size));
}
