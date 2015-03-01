/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_intarray.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 11:10:28 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:53:01 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	biggest_num(int **arr, size_t y, size_t x)
{
	size_t	ret;
	size_t	i;
	size_t	j;

	ret = 0;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (ft_numlen(arr[i][j]) > ret)
				ret = ft_numlen(arr[i][j]);
			j++;
		}
		i++;
	}
	return (ret);
}

void		ft_print_intarray(int **arr, size_t y, size_t x)
{
	int		maxlen;
	size_t	i;
	size_t	j;

	maxlen = biggest_num(arr, y, x);
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_padding(1 + maxlen - ft_numlen(arr[i][j]), ' ');
			ft_putnbr(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
