/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dintarrdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 13:52:51 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 14:10:53 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		**ft_2dintarrdup(int **a, size_t y, size_t x)
{
	int		**b;
	size_t	i;

	b = (int**)malloc(sizeof(int*) * y);
	i = 0;
	while (i < y)
	{
		b[i] = ft_intarrdup(a[i], x);
		i++;
	}
	return (b);
}
