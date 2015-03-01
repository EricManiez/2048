/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:27:47 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/10 17:10:17 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;
	void	*dup;

	dup = dst;
	buf = (char*)malloc(len);
	ft_memcpy(buf, (const char*)src, len);
	ft_memcpy((char*)dst, (const char*)buf, len);
	return (dup);
}
