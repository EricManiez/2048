/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:44:37 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:44:39 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

int		**random_square(int **grid)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	while (i != 1)
	{
		x = rand() % 4;
		y = rand() % 4;
		if (grid[x][y] == 0)
		{
			if (x * y % 2 == 0)
				grid[x][y] = 2;
			else
				grid[x][y] = 4;
			i++;
		}
	}
	return (grid);
}
