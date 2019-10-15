/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:17:29 by skoh              #+#    #+#             */
/*   Updated: 2019/10/14 17:18:13 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "patterns.h"

int		main(int argc, char **argv)
{
	int	col;
	int	row;

	/*
	 * check that the user gave us valid inputs
	 * if inputs are invalid, tell the user how to use the program
	 */
	if (argc == 4 && type_is_valid(argv[1]))
	{
		col = ft_atoi(argv[2]);
		row = ft_atoi(argv[3]);
		if (col <= 0 || row <= 0)
		{
			ft_putstr("col or row must be positive integer\n");
			return (0);
		}
		/* if inputs are valid, tell our function wht kind of pattern to print */
		print_pattern(&argv[1], col, row);
	}
	else
	{
		ft_putstr("usage:\t./a.out [a/b/c/d/e] [col] [row]\n");
		ft_putstr("e.g.:\t./a.out a 5 5\n");
	}
	return (0);
}

int		type_is_valid(char *type)
{
	/* checks that user asks us to print valid patterns */
	if (*type >= 'a' && *type <= 'e')
		return (1);
	return (0);
}
