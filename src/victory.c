/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:21:48 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 19:56:38 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static	void	happy_screen(int **grid)
{
	int		c;

	clear();
	mvprintw(LINES / 2, COLS / 2, " VICTORY !!!!");
	mvprintw(LINES / 2 + 1, COLS / 2, "press space bar to continue");
	mvprintw(LINES / 2 + 2, COLS / 2, "or ESC / '=' to exit");
	while ((c = getch()) != ' ')
	{
		if (c == 27)
		{
			ft_2dintarr_free(&grid, 4);
			endwin();
			exit(1);
		}
		if (c == KEY_RESIZE)
		{
			clear();
			mvprintw(LINES / 2, COLS / 2, " VICTORY !!!!");
			mvprintw(LINES / 2 + 1, COLS / 2, "press space bar to continue");
			mvprintw(LINES / 2 + 2, COLS / 2, "or ESC / '=' to exit");
		}
	}
	clear();
	draw_board(LINES, COLS, grid);
}

int				check_vic(int **grid)
{
	int		var_vic;

	var_vic = biggest_value(grid);
	if (var_vic == WIN_VALUE)
	{
		happy_screen(grid);
		return (1);
	}
	return (0);
}
