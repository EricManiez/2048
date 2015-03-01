/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:01:51 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:37:11 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static	int		**init_map(int **grid)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	srand(time(NULL));
	while (x <= 3)
	{
		while (y <= 3)
		{
			grid[x][y] = 0;
			y++;
		}
		y = 0;
		x++;
	}
	return (grid);
}

static	int		**malloc_map(void)
{
	int		**grid;
	int		i;

	i = 0;
	if ((grid = (int **)malloc(4 * sizeof(*grid))))
	{
		while (i < 4)
		{
			grid[i] = (int*)malloc(4 * sizeof(*(grid[i])));
			i++;
		}
	}
	grid = init_map(grid);
	return (grid);
}

int				**new_grid(void)
{
	int		**grid;

	grid = malloc_map();
	grid = random_square(grid);
	grid = random_square(grid);
	return (grid);
}
