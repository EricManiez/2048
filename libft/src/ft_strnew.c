/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:08:58 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 13:53:50 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	void	*mem;

	if (!(mem = malloc(size + 1)))
		return (NULL);
	mem = ft_memset(mem, '\0', size + 1);
	return ((char*)mem);
}
