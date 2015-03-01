/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrow_mgmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:36:34 by tapostin          #+#    #+#             */
/*   Updated: 2015/03/01 17:36:38 by tapostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game_2048.h>

int		**arrow_mgmt(int arrow, int **arr)
{
	int**(*pfun[4])(int**);

	pfun[0] = &down;
	pfun[1] = &up;
	pfun[2] = &left;
	pfun[3] = &right;
	return (pfun[arrow](arr));
}
