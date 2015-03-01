/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:20:46 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 19:58:15 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include <libft.h>
# include <ncurses.h>
# include <signal.h>
# include <time.h>

typedef enum	e_const
{
	WIN_VALUE = 2048
}				t_win;

void			draw_board(int maxy, int maxx, int **arr);

void			populate_board(int ysp, int xsp, int **arr);

int				**new_grid();

int				biggest_value(int **grid);

int				check_vic(int **grid);

void			check_loss(int ***grid);

int				**arrow_mgmt(int arrow, int **arr);

int				**left(int **arr);

int				**right(int **arr);

int				**up(int **arr);

int				**down(int **arr);

int				**random_square(int **arr);

#endif
