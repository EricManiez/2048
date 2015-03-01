/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:17:11 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/05 17:50:05 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ccp;
	unsigned char	*bcp;

	ccp = (unsigned char)c;
	bcp = (unsigned char*)b;
	while (len > 0)
	{
		len--;
		bcp[len] = ccp;
	}
	return (b);
}
