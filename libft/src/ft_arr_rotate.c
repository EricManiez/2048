/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:45:32 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 13:54:31 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Rotates all the elements in an array closer to 0.
** This means that the the first element becomes last.
*/

#include "libft.h"

void	ft_arr_rotate(void *arr)
{
	int		i;
	void	**a;

	i = 0;
	a = arr;
	if ((int)ft_arrlen(a) < 2)
		return ;
	while (++i < (int)ft_arrlen(a))
		ft_swap(&a[i], &a[i - 1]);
}
