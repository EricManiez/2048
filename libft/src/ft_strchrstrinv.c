/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstrinv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 10:28:37 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/14 10:31:29 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks that the string "s" is composed exclusively of
**	characters found in the "charset" string.
** If an alien character is found, a pointer to the first intruding character
**	is returned.
** If no alien characteris found, function returns NULL.
*/

char	*ft_strchrstrinv(char *s, char *charset)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (!ft_strchr(charset, s[i]))
			return ((char*)&s[i]);
	}
	return (NULL);
}
