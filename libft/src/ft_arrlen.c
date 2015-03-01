/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charraylen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:40:01 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 14:49:51 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calculates the number of present in the "a" array.
*/

#include "libft.h"

size_t		ft_arrlen(void *a)
{
	size_t	elem;
	void	**arr;

	if (!a)
		return (0);
	elem = 0;
	arr = a;
	while (arr[elem])
		elem++;
	return (elem);
}
