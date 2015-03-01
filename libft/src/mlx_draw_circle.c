/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_draw_circle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 16:33:42 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/26 11:16:35 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_mlx.h>

void	mlx_draw_circle(t_coord *ctr, int rad, t_env *mlx, int color)
{
	double	angle;
	int		addr;

	angle = 0;
	while (angle < 360)
	{
		if ((addr = mlx_coord_2_addr
			(ctr->x + rad * cos(angle), ctr->y + rad * sin(angle), mlx)) >= 0)
			mlx_draw_img_pix(mlx, addr, color);
		angle += (2 * 3.14) / (8 * rad);
	}
}
