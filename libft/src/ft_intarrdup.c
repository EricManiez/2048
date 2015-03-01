/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 13:45:09 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 14:07:19 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates sufficient memory, and duplicates a given int array.
*/

#include "libft.h"

int		*ft_intarrdup(int *a, size_t s)
{
	int		*b;
	size_t	i;

	b = (int*)malloc(sizeof(int) * s + 1);
	i = 0;
	while (i < s)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
