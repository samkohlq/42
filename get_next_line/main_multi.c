/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_multi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 15:24:56 by skoh              #+#    #+#             */
/*   Updated: 2019/10/05 17:11:24 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		fd_2;
	int		fd_3;
	char	*line;
	int		ret;

	if (argc < 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	fd_2 = open(argv[2], O_RDONLY);
	close(fd);
	fd = fd_2;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	fd_3 = open(argv[3], O_RDONLY);
	close(fd_2);
	fd = fd_3;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd_3);
	return (0);
}
