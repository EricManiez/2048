/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:46:10 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 11:46:21 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Removes the first element of an array, and returns it.
*/

#include "libft.h"

void	*ft_arr_shift(void *a)
{
	ft_arr_rotate(a);
	return (ft_arr_pop(a));
}
