/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_coord_2_addr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 17:07:07 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/24 17:29:03 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

int		mlx_coord_2_addr(size_t x, size_t y, t_env *mlx)
{
	int addr;

	if (y <= WIN_H && x <= WIN_W)
	{
		addr = (y * mlx->line_size) + (x * 4);
		if (addr < WIN_H * mlx->line_size + WIN_W * 4)
			return (addr);
	}
	return (-1);
}
