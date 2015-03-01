/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:44:47 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/13 09:47:16 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst1;
	t_list	*lst2;

	if (lst == NULL || f == NULL)
		return ;
	lst2 = lst;
	lst1 = lst;
	while (lst2->next)
	{
		lst1 = lst2->next;
		f(lst2);
		lst2 = lst1;
	}
	f(lst2);
}
