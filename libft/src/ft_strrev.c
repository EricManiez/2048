/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:17:12 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/04 16:52:06 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *s)
{
	int		i;
	char	*res;

	i = -1;
	res = "";
	while (ft_strlen(s) - ++i)
		res = ft_charjoin(res, s[ft_strlen(s) - i]);
	res = ft_charjoin(res, s[ft_strlen(s) - i]);
	return (res);
}
