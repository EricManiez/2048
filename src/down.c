/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:36:48 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:36:49 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static int		**dmerge(int **arr, int x)
{
	int y;
	int yb;

	y = 3;
	while (y > 0)
	{
		while (y > 0 && !arr[y][x])
			y--;
		yb = y - 1;
		while (yb >= 0 && !arr[yb][x])
			yb--;
		if (yb >= 0 && arr[y][x] == arr[yb][x])
		{
			arr[y][x] *= 2;
			arr[yb][x] = 0;
		}
		y = yb;
	}
	return (arr);
}

static int		**dmove(int **arr, int x)
{
	int		yb;
	int		y;

	y = 3;
	while (y > 0)
	{
		if (!arr[y][x])
		{
			yb = y - 1;
			while (yb >= 0 && !arr[yb][x])
				yb--;
			if (yb >= 0)
			{
				arr[y][x] = arr[yb][x];
				arr[yb][x] = 0;
			}
		}
		y--;
	}
	return (arr);
}

int				**down(int **grid)
{
	int		x;
	int		**dup;

	dup = ft_2dintarrdup(grid, 4, 4);
	x = -1;
	while (++x < 4)
	{
		grid = dmerge(grid, x);
		grid = dmove(grid, x);
	}
	if (!ft_2dintarrequ(grid, dup, 4, 4))
		grid = random_square(grid);
	ft_2dintarr_free(&dup, 4);
	return (grid);
}
