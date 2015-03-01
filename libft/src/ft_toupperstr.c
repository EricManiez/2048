/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupperstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 09:51:00 by emaniez           #+#    #+#             */
/*   Updated: 2015/01/19 10:05:49 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_toupperstr(char *s)
{
	int		i;
	char	*res;

	i = -1;
	res = (char*)malloc(ft_strlen(s) + 1);
	while (s[++i])
		res[i] = ft_toupper(s[i]);
	return (res);
}
