/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:33:34 by skoh              #+#    #+#             */
/*   Updated: 2019/10/05 18:32:23 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char ** argv)
{
	int		fd;
	int		ret;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (-1);
	while ((ret = get_next_line(fd, &line) == 1))
	{
		printf("%s\n", line);
		free(line);
	}
	if (ret == 0)
		printf("end of file\n");
	else if (ret == -1)
		printf("error reading file");
	if (argc == 2)
		close(fd);
	system("leaks test_gnl");
}
