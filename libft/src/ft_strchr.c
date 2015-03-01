/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:32:37 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/07 11:11:34 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*ret;
	char	ncp;

	ncp = (char)c;
	index = 0;
	while (s[index] && s[index] != ncp)
		index++;
	if (s[index] == '\0' && ncp != '\0')
		ret = NULL;
	else
		ret = (char*)&s[index];
	return (ret);
}
