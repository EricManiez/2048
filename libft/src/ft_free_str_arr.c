/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 10:25:49 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 17:07:15 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees all strings present in a string array, and sets pointers to NULL.
** Does the same with the array itself.
*/

void	ft_free_str_arr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_strdel(&(arr[i]));
		i++;
	}
	ft_memdel((void**)arr);
}
