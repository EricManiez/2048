/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_loss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 16:21:21 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 18:01:43 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

static size_t	final_score(int **grid)
{
	size_t	ret;
	int		i;
	int		j;

	ret = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ret += grid[i][j];
			j++;
		}
		i++;
	}
	return (ret);
}

static void		loss_screen(int **grid)
{
	clear();
	mvprintw(LINES / 2, COLS / 2, "You lose!");
	mvprintw(LINES / 2 + 1, COLS / 2, "Final score : %d", final_score(grid));
	mvprintw(LINES / 2 + 2, COLS / 2, "Press ESC or '=' to exit");
}

void			check_loss(int ***arr)
{
	int		**dupl;
	int		**dupr;
	int		**dupu;
	int		**dupd;

	dupl = ft_2dintarrdup(*arr, 4, 4);
	dupr = ft_2dintarrdup(*arr, 4, 4);
	dupu = ft_2dintarrdup(*arr, 4, 4);
	dupd = ft_2dintarrdup(*arr, 4, 4);
	if (ft_2dintarrequ(*arr, left(dupl), 4, 4) &&
			ft_2dintarrequ(*arr, right(dupr), 4, 4) &&
			ft_2dintarrequ(*arr, up(dupu), 4, 4) &&
			ft_2dintarrequ(*arr, down(dupd), 4, 4))
		loss_screen(*arr);
	ft_2dintarr_free(&dupl, 4);
	ft_2dintarr_free(&dupr, 4);
	ft_2dintarr_free(&dupd, 4);
	ft_2dintarr_free(&dupu, 4);
}
