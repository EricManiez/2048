/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowerstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 09:51:00 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/19 10:08:17 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_tolowerstr(char *s)
{
	int		i;
	char	*res;

	i = -1;
	res = (char*)malloc(ft_strlen(s) + 1);
	while (s[++i])
		res[i] = ft_tolower(s[i]);
	return (res);
}
