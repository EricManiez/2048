/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:35:15 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/26 16:05:41 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int		j;
	char				*sub;

	j = -1;
	if (!(sub = (char*)malloc(len + 1)))
		return (NULL);
	while (++j < len)
		sub[j] = s[j + start];
	sub[j] = '\0';
	return (sub);
}
