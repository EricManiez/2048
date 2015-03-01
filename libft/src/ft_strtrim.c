/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:51:58 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/12 09:41:50 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		strlen;
	int		lsp;
	int		i;
	char	*scp;

	strlen = ft_strlen(s);
	lsp = 0;
	i = -1;
	while (++i < strlen && ft_isspace(s[i]) == 1)
		lsp++;
	while (strlen > 0 && ft_isspace(s[strlen - 1]) == 1)
		strlen--;
	if (strlen < lsp)
		strlen = lsp;
	if (!(scp = (char*)malloc(strlen - lsp + 1)) || !s)
		return (NULL);
	i = -1;
	while (++i < strlen - lsp)
		scp[i] = s[i + lsp];
	scp[i] = '\0';
	return (scp);
}
