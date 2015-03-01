/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:08:23 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/10 16:08:27 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s2len;

	i = -1;
	j = -1;
	s2len = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[++i])
	{
		while (s1[i] == s2[++j])
		{
			if (j == (s2len - 1))
				return ((char*)&s1[i - j]);
			i++;
		}
		i = i - j;
		j = -1;
	}
	return (NULL);
}
