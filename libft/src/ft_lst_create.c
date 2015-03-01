/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 15:42:39 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/17 16:44:43 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lst_create(void)
{
	t_lst	*lst;

	lst = (t_lst*)malloc(sizeof(t_lst));
	lst->head = NULL;
	lst->tail = NULL;
	return (lst);
}
