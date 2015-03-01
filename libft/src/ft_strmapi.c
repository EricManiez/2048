/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:07:12 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 14:08:01 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sdup;

	i = -1;
	if (!(sdup = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		sdup[i] = f(i, s[i]);
	sdup[i] = '\0';
	return (sdup);
}
