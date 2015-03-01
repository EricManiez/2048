/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 16:44:52 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 11:17:55 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints character "c", "size" times.
*/

#include "libft.h"

void	ft_padding(size_t size, char c)
{
	while (size)
	{
		ft_putchar(c);
		size--;
	}
}
