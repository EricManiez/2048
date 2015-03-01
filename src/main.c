/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:25:18 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 20:23:53 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static	int		**init(void)
{
	int		**grid;

	freopen("/dev/tty", "rw", stdin);
	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	grid = new_grid();
	return (grid);
}

static	void	process(int **grid)
{
	int		c;
	int		t;

	t = 0;
	draw_board(LINES, COLS, grid);
	while ((c = getch()) != 27)
	{
		if (258 <= c && c <= 261)
		{
			grid = arrow_mgmt(c % 258, grid);
			clear();
			draw_board(LINES, COLS, grid);
		}
		if (c == KEY_RESIZE)
		{
			clear();
			draw_board(LINES, COLS, grid);
		}
		if (t == 0)
			t = check_vic(grid);
		check_loss(&grid);
	}
	ft_2dintarr_free(&grid, 4);
	endwin();
}

int				main(void)
{
	int		**grid;
	int		enu;

	if (WIN_VALUE < 5)
	{
		endwin();
		ft_putendl("\nWIN_VALUE too low!!\nExiting...\n");
		exit (-1);
	}
	enu = WIN_VALUE & (WIN_VALUE - 1);
	if (enu != 0)
	{
		ft_putendl("\nWIN_VALUE must be a power of 2.\nExiting...\n");
		return (0);
	}
	grid = init();
	process(grid);
	return (1);
}
