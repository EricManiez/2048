/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:02:53 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 17:35:01 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*ptr;

	if (alst == NULL || *alst == NULL)
		return ;
	ptr = *alst;
	if (alst == NULL || del == NULL)
	{
		ptr = NULL;
		return ;
	}
	del(ptr->content, ptr->content_size);
	free(ptr);
	*alst = NULL;
}
