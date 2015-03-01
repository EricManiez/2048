/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:36:48 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:26:01 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

void	populate_board(int ysp, int xsp, int **arr)
{
	int	y;
	int x;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (arr[y][x])
				mvprintw(y * ysp + ysp / 2,
						1 + x * xsp + (xsp - ft_numlen(arr[y][x])) / 2,
						"%d", arr[y][x]);
		}
	}
}
