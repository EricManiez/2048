/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_fl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 15:10:15 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 15:15:16 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** On top of its usual behavior, frees left argument, and sets pointer to NULL.
*/

char	*ft_strjoin_fl(char **s1, char const *s2)
{
	int		i;
	int		j;
	int		totlen;
	char	*cat;

	if (*s1 == NULL)
		return ((char*)s2);
	if (s2 == NULL)
		return ((char*)*s1);
	i = -1;
	j = -1;
	totlen = ft_strlen(*s1) + ft_strlen(s2);
	if (!(cat = (char*)malloc(totlen + 1)))
		return (NULL);
	while ((*s1)[++i])
		cat[i] = (*s1)[i];
	while (s2[++j])
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	ft_strdel(s1);
	return (cat);
}
