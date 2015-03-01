/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charjoin_f.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 16:17:47 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 16:30:03 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Same behavior as charjoin, but frees string and sets pointer to NULL.
*/

char	*ft_charjoin_f(char **s, char const c)
{
	int		i;
	int		totlen;
	char	*cat;

	i = -1;
	if (*s == NULL)
		return (NULL);
	if (c == 0)
		return ((char*)*s);
	totlen = ft_strlen(*s) + 1;
	if (!(cat = (char*)malloc(totlen + 1)))
		return (NULL);
	while ((*s)[++i])
		cat[i] = (*s)[i];
	cat[i] = c;
	cat[++i] = '\0';
	ft_strdel(s);
	return (cat);
}
