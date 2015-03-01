/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:56:18 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:02:16 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

int		biggest_value(int **grid)
{
	int		x;
	int		y;
	int		ret;

	y = -1;
	ret = grid[0][0];
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (grid[y][x] > ret)
				ret = grid[y][x];
		}
	}
	return (ret);
}
