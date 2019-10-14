/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patterns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:33:38 by skoh              #+#    #+#             */
/*   Updated: 2019/10/14 16:21:25 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "patterns.h"

int		main(int argc, char **argv)
{
	if (argc == 4 && type_is_valid(argv[1]))
	{
		print_pattern(&argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	}
	else
		ft_putstr("usage: [a/b/c/d/e] [col] [row]\n");
	return (0);
}

int		type_is_valid(char *type)
{
	if (*type >= 'a' && *type <= 'e')
		return (1);
	return (0);
}

void	print_pattern(char **type, int col, int row)
{
	int		col_ctr;
	int		row_ctr;

	row_ctr = 0;
	col_ctr = 0;
	if (col <= 0 || row <= 0)
	{
		ft_putstr("col or row must be positive integer\n");
		return ;
	}
	while (row_ctr < row)
	{
		while (col_ctr < col)
		{
			if (row_ctr == 0)
				first_row(*type, col_ctr, col);
			else if (row_ctr == row - 1)
				last_row(*type, col_ctr, col);
			else if (row_ctr > 0 && row_ctr < row - 1)
				middle_row(*type, col_ctr, col);
			col_ctr++;
		}
		ft_putchar('\n');
		col_ctr = 0;
		row_ctr++;
	}
}

void	first_row(char *type, int col_ctr, int col)
{
	char	row;
	char	first;
	char	mid;
	char	last;

	row = 'f';
	assign_char(&row, &type, &first, &mid, &last);
	if (col_ctr == 0)
		ft_putchar(first);
	else if (col_ctr == col - 1)
		ft_putchar(last);
	else
		ft_putchar(mid);
}

void	last_row(char *type, int col_ctr, int col)
{
	char	row;
	char	first;
	char	mid;
	char	last;

	row = 'l';
	assign_char(&row, &type, &first, &mid, &last);
	if (col_ctr == 0)
		ft_putchar(first);
	else if (col_ctr == col - 1)
		ft_putchar(last);
	else
		ft_putchar(mid);
}

void	middle_row(char *type, int col_ctr, int col)
{
	char	row;
	char	first;
	char	mid;
	char	last;

	row = 'm';
	assign_char(&row, &type, &first, &mid, &last);
	if (col_ctr == 0)
		ft_putchar(first);
	else if (col_ctr == col - 1)
		ft_putchar(last);
	else
		ft_putchar(mid);
}

void	assign_char(char *row, char **type, char *first, char *mid, char *last)
{
	if (**type == 'a')
	{
		if (*row == 'f' || *row == 'l')
		{
			*first = 'o';
			*mid = '-';
			*last = 'o';
		}
		else if (*row == 'm')
		{
			*first = '|';
			*mid = ' ';
			*last = '|';
		}
	}
	else if (**type == 'b')
	{
		if (*row == 'f')
		{
			*first = '/';
			*mid = '*';
			*last = '\\';
		}
		if (*row == 'l')
		{
			*first = '\\';
			*mid = '*';
			*last = '/';
		}
		else if (*row == 'm')
		{
			*first = '*';
			*mid = ' ';
			*last = '*';
		}
	}
	else if (**type == 'c')
	{
		if (*row == 'f')
		{
			*first = 'A';
			*mid = 'B';
			*last = 'A';
		}
		if (*row == 'l')
		{
			*first = 'C';
			*mid = 'B';
			*last = 'C';
		}
		else if (*row == 'm')
		{
			*first = 'B';
			*mid = ' ';
			*last = 'B';
		}
	}
	else if (**type == 'd')
	{
		if (*row == 'f' || *row == 'l')
		{
			*first = 'A';
			*mid = 'B';
			*last = 'C';
		}
		else if (*row == 'm')
		{
			*first = 'B';
			*mid = ' ';
			*last = 'B';
		}
	}
	else if (**type == 'e')
	{
		if (*row == 'f')
		{
			*first = 'A';
			*mid = 'B';
			*last = 'C';
		}
		else if (*row == 'l')
		{
			*first = 'C';
			*mid = 'B';
			*last = 'A';
		}
		else if (*row == 'm')
		{
			*first = 'B';
			*mid = ' ';
			*last = 'B';
		}
	}
}
