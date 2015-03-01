/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:49:35 by emaniez           #+#    #+#             */
/*   Updated: 2014/12/07 12:34:18 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*dupinit;
	t_list	*lsttr;
	t_list	*duptr;

	if (lst == NULL || f == NULL)
		return (NULL);
	f(lst);
	dupinit = f(ft_lstnew(lst->content, lst->content_size));
	lsttr = lst;
	duptr = dupinit;
	while (lsttr->next)
	{
		lsttr = lsttr->next;
		f(lsttr);
		duptr->next = f(ft_lstnew(lsttr->content, lsttr->content_size));
		if (duptr->next == NULL)
			return (NULL);
		duptr = duptr->next;
	}
	return (dupinit);
}
