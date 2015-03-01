/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_link.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:22:31 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 16:28:43 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_link(t_node *node1, t_node *node2)
{
	if (node1)
		node1->next = node2;
	if (node2)
		node2->prev = node1;
}
