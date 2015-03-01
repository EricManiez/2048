/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:47:08 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/05 17:47:52 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ccp;
	unsigned char	*scp;
	void			*ptr;
	int				i;

	ccp = c;
	scp = (unsigned char*)s;
	ptr = NULL;
	i = -1;
	while (++i < (int)n)
	{
		if (scp[i] == ccp)
			ptr = &scp[i];
	}
	return (ptr);
}
