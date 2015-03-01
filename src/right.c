/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:44:44 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:44:45 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static int		*rmerge(int *arr)
{
	int		x;
	int		y;

	x = 3;
	while (x > 0)
	{
		while (x > 0 && !arr[x])
			x--;
		y = x - 1;
		while (y >= 0 && !arr[y])
			y--;
		if (arr[x] == arr[y] && y >= 0)
		{
			arr[x] *= 2;
			arr[y] = 0;
		}
		x = y;
	}
	return (arr);
}

static int		*rmove(int *arr)
{
	int		x;
	int		y;

	x = 3;
	while (x > 0)
	{
		if (!arr[x])
		{
			y = x - 1;
			while (y >= 0 && !arr[y])
				y--;
			if (y >= 0)
			{
				arr[x] = arr[y];
				arr[y] = 0;
			}
		}
		x--;
	}
	return (arr);
}

int				**right(int **grid)
{
	int		y;
	int		**dup;

	y = -1;
	dup = ft_2dintarrdup(grid, 4, 4);
	while (++y < 4)
	{
		grid[y] = rmerge(grid[y]);
		grid[y] = rmove(grid[y]);
	}
	if (!ft_2dintarrequ(grid, dup, 4, 4))
		grid = random_square(grid);
	ft_2dintarr_free(&dup, 4);
	return (grid);
}
