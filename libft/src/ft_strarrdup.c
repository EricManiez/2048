/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 15:43:53 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 14:19:49 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates sufficient memory, and duplicates a given character string array.
*/

#include "libft.h"

char	**ft_strarrdup(char **a)
{
	char	**b;
	int		i;

	b = (char**)malloc(sizeof(char*) * (ft_arrlen(a) + 2));
	i = -1;
	while (a[++i])
		b[i] = ft_strdup(a[i]);
	b[i] = NULL;
	return (b);
}
