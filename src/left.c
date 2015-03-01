/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:44:07 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:44:08 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static int		*lmerge(int *arr)
{
	int		x;
	int		y;

	x = 0;
	while (x < 3)
	{
		while (x < 3 && !arr[x])
			x++;
		y = x + 1;
		while (y < 4 && !arr[y])
			y++;
		if (arr[x] == arr[y] && y < 4)
		{
			arr[x] *= 2;
			arr[y] = 0;
		}
		x = y;
	}
	return (arr);
}

static int		*lmove(int *arr)
{
	int		x;
	int		y;

	x = 0;
	while (x < 3)
	{
		if (!arr[x])
		{
			y = x + 1;
			while (y < 4 && !arr[y])
				y++;
			if (y < 4)
			{
				arr[x] = arr[y];
				arr[y] = 0;
			}
		}
		x++;
	}
	return (arr);
}

int				**left(int **grid)
{
	int		y;
	int		**dup;

	y = -1;
	dup = ft_2dintarrdup(grid, 4, 4);
	while (++y < 4)
	{
		grid[y] = lmerge(grid[y]);
		grid[y] = lmove(grid[y]);
	}
	if (!ft_2dintarrequ(grid, dup, 4, 4))
		grid = random_square(grid);
	ft_2dintarr_free(&dup, 4);
	return (grid);
}
