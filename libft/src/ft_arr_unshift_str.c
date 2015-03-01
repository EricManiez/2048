/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_unshift_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:46:41 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 13:58:20 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds a new element (s) to the beginning of a string array.
*/

#include "libft.h"

int		ft_arr_unshift_str(char **a, char *s)
{
	ft_arr_rev(a);
	ft_arr_push_str(a, s);
	ft_arr_rev(a);
	return (ft_arrlen(a));
}
