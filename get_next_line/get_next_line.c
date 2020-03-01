/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 13:59:08 by skoh              #+#    #+#             */
/*   Updated: 2019/10/05 17:11:02 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	output_line(char **ptrs, int fd, char **line, int ret)
{
	int		len;
	char	*tmp;

	len = 0;
	while (ptrs[fd][len] != '\n' && ptrs[fd][len] != '\0')
		len++;
	if (ptrs[fd][len] == '\n')
	{
		*line = ft_strsub(ptrs[fd], 0, len);
		tmp = ft_strdup(&ptrs[fd][len + 1]);
		free(ptrs[fd]);
		ptrs[fd] = tmp;
	}
	else if (ptrs[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(ptrs[fd]);
		ft_strdel(&ptrs[fd]);
	}
	return (1);
}

void		join(char **ptrs, int fd, char *buff)
{
	char	*tmp;

	tmp = ft_strjoin(ptrs[fd], buff);
	free(ptrs[fd]);
	ptrs[fd] = tmp;
}

int			get_next_line(const int fd, char **line)
{
	static char		*fd_ptrs[OPEN_MAX];
	char			buff[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || line == NULL || fd > OPEN_MAX)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (fd_ptrs[fd] == NULL)
			fd_ptrs[fd] = ft_strnew(1);
		join(fd_ptrs, fd, buff);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (fd_ptrs[fd] == NULL || fd_ptrs[fd][0] == '\0'))
		return (0);
	return (output_line(fd_ptrs, fd, line, ret));
}
