/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:15:43 by emaniez           #+#    #+#             */
/*   Updated: 2014/12/07 12:36:34 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*ptr;
	t_list	*ptr2;

	if (alst == NULL || del == NULL)
		return ;
	ptr = *alst;
	while (ptr->next)
	{
		ptr2 = ptr->next;
		del(ptr->content, ptr->content_size);
		ptr = ptr2;
	}
	del(ptr->content, ptr->content_size);
	free(ptr);
	*alst = NULL;
}
