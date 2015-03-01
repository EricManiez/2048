/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 15:42:27 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 16:45:05 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lst_init(void *content, size_t content_size)
{
	t_lst	*lst;

	lst = ft_lst_create();
	lst->head = ft_lst_create_node(content, content_size);
	lst->tail = lst->head;
	return (lst);
}
