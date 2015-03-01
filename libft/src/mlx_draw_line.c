/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_draw_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 15:12:51 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:54:04 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

static void		drawl_steep(t_coord one, t_coord two, t_env *mlx, int color)
{
	int		y;
	int		addr;

	y = one.y;
	while (y <= two.y)
	{
		addr = y * mlx->line_size +
			(one.x + (two.x - one.x) * (y - one.y) / (two.y - one.y)) * 4;
		if (0 <= addr && addr <= WIN_H * mlx->line_size)
			mlx_draw_img_pix(mlx, addr, color);
		y++;
	}
}

static void		drawl_flat(t_coord one, t_coord two, t_env *mlx, int color)
{
	int		x;
	int		addr;

	x = one.x;
	while (x <= two.x)
	{
		addr = (one.y + (two.y - one.y) * (x - one.x) / (two.x - one.x))
			* mlx->line_size + x * 4;
		if (0 <= addr && addr <= WIN_H * mlx->line_size)
			mlx_draw_img_pix(mlx, addr, color);
		x++;
	}
}

void			mlx_draw_line(t_coord one, t_coord two, t_env *mlx, int color)
{
	if (one.x == two.x && one.y == two.y)
		;
	else if ((ft_abs(two.x - one.x) >= ft_abs(two.y - one.y)))
	{
		if (one.x < two.x)
			drawl_flat(one, two, mlx, color);
		else
			drawl_flat(two, one, mlx, color);
	}
	else
	{
		if (one.y < two.y)
			drawl_steep(one, two, mlx, color);
		else
			drawl_steep(two, one, mlx, color);
	}
}
