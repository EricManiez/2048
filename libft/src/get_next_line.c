/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:51:17 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/01 19:52:22 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

static int			end_1(char **line, char **buf, char **lefto)
{
	if ((*lefto = ft_strchr(*buf, '\n')))
	{
		*line = ft_strnjoin(*line, *buf, (ft_strlen(*buf) - ft_strlen(*lefto)));
		*buf = ft_strncpy(*buf, ++*lefto, BUF_SIZE + 1);
		return (1);
	}
	return (0);
}

static char			*gnl_read(int fd, char **line, char *buf)
{
	int				ctrl;
	char			*lefto;

	*line = ft_memalloc(1);
	if (!buf)
		buf = ft_memalloc(BUF_SIZE + 1);
	if (end_1(line, &buf, &lefto) == 1)
		return (buf);
	ft_strcat(*line, buf);
	while ((ctrl = read(fd, buf, BUF_SIZE)) && !(ft_strchr(buf, '\n')))
	{
		buf[ctrl] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	if (ctrl == 0)
		return (NULL);
	end_1(line, &buf, &lefto);
	return (buf);
}

static char			*find_buf(int fd, t_list **ll, t_list **lltr)
{
	t_list			*llsrch;

	llsrch = *ll;
	while ((llsrch->content_size != (size_t)fd) && llsrch->next)
		llsrch = llsrch->next;
	if (llsrch->content_size == (size_t)fd)
	{
		*lltr = llsrch;
		return (llsrch->content);
	}
	*lltr = NULL;
	return (NULL);
}

int					get_next_line(int const fd, char **line)
{
	static t_list	*ll;
	char			*buf;
	t_list			*lltr;

	if (!line || fd < 0)
		return (-1);
	buf = ft_memalloc(BUF_SIZE + 1);
	if (read(fd, buf, 0) == -1)
		return (-1);
	if (!ll)
	{
		ll = ft_lstnew((void*)buf, (size_t)fd);
		lltr = ll;
	}
	else
		buf = find_buf(fd, &ll, &lltr);
	if (!lltr)
	{
		lltr = ft_lstnew((void*)"", fd);
		ft_lstadd(&ll, lltr);
	}
	if (!(lltr->content = gnl_read(fd, line, buf)))
		return (0);
	return (1);
}
