/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_rrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:45:53 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 17:49:17 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Rotates all elements of an array to the back of the array.
** The last element, pushed off the edge, comes to the front.
*/

#include "libft.h"

void	ft_arr_rrotate(void *arr)
{
	int		i;
	void	**a;

	a = arr;
	if ((int)ft_arrlen(a) < 2)
		return ;
	i = ft_arrlen(a) - 1;
	while (--i >= 0)
		ft_swap(&a[i], &a[i + 1]);
}
