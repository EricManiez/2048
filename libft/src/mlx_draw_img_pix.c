/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_draw_img_pix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 14:41:43 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/20 17:06:21 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

void	mlx_draw_img_pix(t_env *mlx, int addr, int color)
{
	mlx->img_addr[addr - (addr % 4)] = color % 256;
	mlx->img_addr[addr - (addr % 4) + 1] = (color >> 8) % 256;
	mlx->img_addr[addr - (addr % 4) + 2] = color >> 16;
}
