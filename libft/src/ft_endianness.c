/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endianness.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 10:17:55 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/28 11:37:14 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Figures out the endianness of the machine you're using. Returns 0 for little.
*/

#include "libft.h"

int		ft_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (0);
	else
		return (1);
}
