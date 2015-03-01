/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_strnumarray_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 10:59:48 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 15:33:57 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Usage : when sorting an array of strings, in which all strings are numbers,
** and we would like to sort numerically, with the lowest value at the front of
** the array.
** Function returns 1 if the array is sorted, 0 if not.
*/

#include "libft.h"

int		ft_check_strnumarray_sort(char **a)
{
	int	i;

	i = 0;
	while (a[++i])
	{
		if (a[i] && ft_atoi(a[i - 1]) > ft_atoi(a[i]))
			return (0);
	}
	return (1);
}
