/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:03:29 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 10:27:57 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = -1;
	if (n == 0)
		return (1);
	while (++i < n && s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (s1[i] == '\0' && s1[i] != s2[i])
		return (0);
	return (1);
}
