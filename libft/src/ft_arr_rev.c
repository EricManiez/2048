/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:45:11 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 14:19:54 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reverses all the elements in an array.
*/

#include "libft.h"

void	ft_arr_rev(void *arr)
{
	int		elems;
	int		i;
	void	**a;

	a = arr;
	if ((int)ft_arrlen(a) < 2)
		return ;
	elems = ft_arrlen(a) - 1;
	i = 0;
	while (i < elems)
	{
		ft_swap(&a[i], &a[elems]);
		i++;
		elems--;
	}
}
