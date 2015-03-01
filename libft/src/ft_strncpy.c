/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:59:16 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/10 15:03:07 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	index;

	index = -1;
	while (++index < n && src[index])
	{
		if (src[index])
			dst[index] = src[index];
		else
			dst[index] = '\0';
	}
	while (dst[index])
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
