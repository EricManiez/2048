/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:04:13 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:21:12 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static void	draw_corners(int maxx, int cell_height, int cell_width)
{
	int	y;
	int	x;

	y = -1;
	maxx = 4 * cell_width + 1;
	while (++y < cell_height * 4 + 1)
	{
		x = -1;
		while (++x < maxx)
		{
			if (y % cell_height == 0 && x % cell_width == 0)
				mvprintw(y, x, "+");
		}
	}
}

static void	draw_columns(int maxx, int cell_height, int cell_width)
{
	int	y;
	int	x;

	y = -1;
	maxx = 4 * cell_width + 1;
	while (++y < cell_height * 4 + 1)
	{
		x = -1;
		while (++x < maxx)
		{
			if (y % cell_height == 0 && x % cell_width == 0)
				;
			else if (x % cell_width == 0 && y < cell_height * 4)
				mvprintw(y, x, "|");
		}
	}
}

static void	draw_rows(int maxx, int cell_height, int cell_width)
{
	int	y;
	int	x;

	y = -1;
	while (++y < cell_height * 4 + 1)
	{
		x = -1;
		while (++x < maxx)
		{
			if (y % cell_height == 0 && x % cell_width == 0)
				;
			else if (y % cell_height == 0 && x < cell_width * 4)
				mvprintw(y, x, "-");
		}
	}
}

void		draw_board(int maxy, int maxx, int **arr)
{
	int	cell_height;
	int	cell_width;

	if (maxx < (int)(ft_numlen(biggest_value(arr))) * 4 + 5 || maxy < 9)
	{
		ft_2dintarr_free(&arr, 4);
		endwin();
		ft_putendl_fd("\nBoard too small! Exiting...\n", 2);
		exit(-1);
	}
	cell_height = (maxy - 1) / 4;
	cell_width = (maxx - 1) / 4;
	draw_corners(maxx, cell_height, cell_width);
	draw_rows(maxx, cell_height, cell_width);
	draw_columns(maxx, cell_height, cell_width);
	populate_board(cell_height, cell_width, arr);
	refresh();
}
