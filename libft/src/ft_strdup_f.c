/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:17:52 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 15:18:59 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** On top of its usual behavior, frees argument and sets pointer to NULL.
*/

char	*ft_strdup_f(char **s1)
{
	int		i;
	char	*dst;

	if (!*s1)
		return (NULL);
	i = -1;
	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(*s1) + 1))))
		return (NULL);
	while ((*s1)[++i])
		dst[i] = (*s1)[i];
	dst[i] = '\0';
	ft_strdel(s1);
	return (dst);
}
