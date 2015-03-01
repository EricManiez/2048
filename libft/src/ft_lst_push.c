/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 15:50:01 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 16:30:45 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lst_push(t_lst *lst, void *content, size_t content_size)
{
	t_node	*new;

	if (!lst->tail)
		lst = ft_lst_init(content, content_size);
	else
	{
		new = ft_lst_create_node(content, content_size);
		ft_lst_link(lst->tail, new);
		lst->tail = new;
	}
	return (ft_lst_len(lst));
}
