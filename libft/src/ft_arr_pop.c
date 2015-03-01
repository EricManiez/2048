/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:44:15 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/28 18:31:17 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Removes the last element of an array, and returns it.
*/

#include "libft.h"

void	*ft_arr_pop(void *arr)
{
	char	*ret;
	int		i;
	void	**a;

	a = arr;
	i = -1;
	while (a[++i])
		;
	ret = ft_strdup(a[--i]);
	a[i] = NULL;
	return (ret);
}
