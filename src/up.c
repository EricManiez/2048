/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:44:53 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:44:54 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static int		**umerge(int **arr, int x)
{
	int y;
	int yb;

	y = 0;
	while (y < 3)
	{
		while (y < 2 && !arr[y][x])
			y++;
		yb = y + 1;
		while (yb < 4 && !arr[yb][x])
			yb++;
		if (yb < 4 && arr[y][x] == arr[yb][x])
		{
			arr[y][x] *= 2;
			arr[yb][x] = 0;
		}
		y = yb;
	}
	return (arr);
}

static int		**umove(int **arr, int x)
{
	int		yb;
	int		y;

	y = 0;
	while (y < 3)
	{
		if (!arr[y][x])
		{
			yb = y + 1;
			while (yb < 4 && !arr[yb][x])
				yb++;
			if (yb < 4)
			{
				arr[y][x] = arr[yb][x];
				arr[yb][x] = 0;
			}
		}
		y++;
	}
	return (arr);
}

int				**up(int **grid)
{
	int		x;
	int		**dup;

	dup = ft_2dintarrdup(grid, 4, 4);
	x = -1;
	while (++x < 4)
	{
		grid = umerge(grid, x);
		grid = umove(grid, x);
	}
	if (!ft_2dintarrequ(grid, dup, 4, 4))
		grid = random_square(grid);
	ft_2dintarr_free(&dup, 4);
	return (grid);
}
