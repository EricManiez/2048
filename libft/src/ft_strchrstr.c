/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 10:31:41 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/14 10:32:29 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function checks the string "s" for any of the characters contained
** in the string "charset".
** If one is found, the function returns a pointer to the first occurence
** in "s" of one of the characters in "charset".
** If none is found, NULL is returned.
*/

char	*ft_strchrstr(char *s, char *charset)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (ft_strchr(charset, s[i]))
			return ((char*)&s[i]);
	}
	return (NULL);
}
