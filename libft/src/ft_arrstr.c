/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 10:47:16 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/23 11:07:14 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Much like its little brother strchr.
** Locates first occurence of "str" in "arr", and returns the pointer.
** If a match doesn't exist, returns NULL.
*/

char	*ft_arrstr(char **arr, char *str, size_t arrlen)
{
	size_t	i;

	i = 0;
	while (i < arrlen)
	{
		if (ft_strequ(arr[i], str))
			return (arr[i]);
		i++;
	}
	return (NULL);
}
