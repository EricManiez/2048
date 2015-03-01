/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 19:28:52 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/23 19:51:02 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnjoin(char const *s1, char const *s2, size_t length)
{
	int		i;
	int		j;
	int		totlen;
	char	*cat;

	if (s1 == NULL)
		return ((char*)s2);
	if (s2 == NULL)
		return ((char*)s1);
	i = -1;
	j = -1;
	totlen = ft_strlen(s1) + length;
	if (!(cat = (char*)malloc(totlen + 1)))
		return (NULL);
	while (s1[++i])
		cat[i] = s1[i];
	while (++j < (int)length)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
