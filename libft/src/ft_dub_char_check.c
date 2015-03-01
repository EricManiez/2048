/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dub_char_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 14:18:48 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/14 18:09:26 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function tests string s for multiple occurences of char c.
** If multiple occurences are found, function returns 1.
*/

#include "libft.h"

int		ft_dub_char_check(char *s, char c)
{
	char	*ptr;

	if (s == NULL)
		return (0);
	if ((ptr = ft_strchr(s, c)))
	{
		if (ft_strchr(++ptr, c))
			return (1);
	}
	return (0);
}
