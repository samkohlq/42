/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:04:43 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:56:56 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (parse_file(fd) == 0)
		{
			ft_putstr("error\n");
			return (1);
		}
		close(fd);
	}
	else
	{
		ft_putstr("usage: ./fillit filename\n");
		return (1);
	}
	return (0);
}
