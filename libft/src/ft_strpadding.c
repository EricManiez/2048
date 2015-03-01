/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 16:44:52 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/21 13:55:20 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates necessary memory;
** Adds character "c" to string "s", "size" times.
*/

#include "libft.h"

void	ft_strpadding(size_t size, char c, char **s)
{
	while (size)
	{
		*(s) = ft_charjoin(*(s), c);
		size--;
	}
}
