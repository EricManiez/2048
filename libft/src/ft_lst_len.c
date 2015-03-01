/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 15:23:40 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 15:57:56 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lst_len(t_lst *lst)
{
	size_t	len;
	t_node	*ptr;

	if (lst->head && lst->tail)
	{
		len = 1;
		ptr = lst->head;
		while (ptr != lst->tail)
		{
			ptr = ptr->next;
			len++;
		}
		return (len);
	}
	return (0);
}
