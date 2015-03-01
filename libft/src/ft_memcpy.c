/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:05:14 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/10 17:14:51 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	void			*ret;

	ret = dst;
	i = -1;
	while (++i < n)
		((unsigned char*)dst)[i] = ((const unsigned char*)src)[i];
	return (ret);
}
