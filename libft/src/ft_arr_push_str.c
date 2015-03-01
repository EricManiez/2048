/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_push_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 11:44:45 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/06 14:24:11 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds an element (s) to the end of a string array. Returns new length.
*/

#include "libft.h"

int		ft_arr_push_str(char **a, char *s)
{
	size_t	arrlen;

	arrlen = ft_arrlen(a);
	a[arrlen] = ft_strdup(s);
	a[arrlen + 1] = NULL;
	return (ft_arrlen(a));
}
