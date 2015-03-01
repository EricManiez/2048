/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:01:04 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 14:05:35 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*sdup;

	i = -1;
	if (!(sdup = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		sdup[i] = f(s[i]);
	sdup[i] = '\0';
	return (sdup);
}
