/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_initiate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 11:03:35 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:53:52 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

/*
** Initiates all the stuff to start working with mlx.
** Also creates an image and stores the adress within mlx struct.
*/

static void	error(char *name)
{
	ft_printf("\n%s : mlx function error! Exiting...\n\n", name);
	exit (-1);
}

void		mlx_initiate(t_env *mlx, char *name)
{
	mlx->legend = 1;
	mlx->zoom = 1;
	mlx->bbp = 32;
	mlx->line_size = WIN_W * 4;
	mlx->imgx = 0;
	mlx->imgy = 0;
	mlx->endian = ft_endianness();
	if (!(mlx->ptr = mlx_init()))
		error(name);
	mlx->win = mlx_new_window(mlx->ptr, WIN_W, WIN_H, name);
	if (!(mlx->img = mlx_new_image(mlx->ptr, WIN_W, WIN_H)))
		error(name);
	mlx->img_addr =
		mlx_get_data_addr(mlx->img, &mlx->bbp, &mlx->line_size, &mlx->endian);
}
