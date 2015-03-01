/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 10:32:50 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 15:29:07 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_charjoin(char const *s, char const c)
{
	int		i;
	int		totlen;
	char	*cat;

	i = -1;
	if (s == NULL)
		return (NULL);
	if (c == 0)
		return ((char*)s);
	totlen = ft_strlen(s) + 1;
	if (!(cat = (char*)malloc(totlen + 1)))
		return (NULL);
	while (s[++i])
		cat[i] = s[i];
	cat[i] = c;
	cat[++i] = '\0';
	return (cat);
}
