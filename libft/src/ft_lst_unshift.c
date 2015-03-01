/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_unshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 15:55:47 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 16:45:14 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lst_unshift(t_lst *lst, void *content, size_t content_size)
{
	t_node	*new;

	if (!lst->head)
		lst = ft_lst_init(content, content_size);
	else
	{
		new = ft_lst_create_node(content, content_size);
		ft_lst_link(new, lst->head);
		lst->head = new;
	}
	return (ft_lst_len(lst));
}
