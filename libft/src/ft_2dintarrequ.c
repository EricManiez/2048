/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dintarrcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:40:12 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 14:48:18 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_2dintarrequ(int **a, int **b, size_t y, size_t x)
{
	size_t	i;

	i = 0;
	while (i < y)
	{
		if (!ft_intarrequ(a[i], b[i], x))
			return (0);
		i++;
	}
	return (1);
}
