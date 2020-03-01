/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:22:44 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:57:17 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		overlap(char map[16][16], char *tetri_arr, int a, int b)
{
	int i;
	int x;
	int y;

	i = 0;
	x = tetri_arr[i] + a - 48;
	y = tetri_arr[i + 1] + b - 48;
	while (i <= 7 && map[y][x] == '.')
	{
		i += 2;
		x = tetri_arr[i] + a - 48;
		y = tetri_arr[i + 1] + b - 48;
	}
	return (i);
}

void	place(char *tetri_arr, char map[16][16], char character, int xy[2])
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = tetri_arr[i] + xy[0] - 48;
	y = tetri_arr[i + 1] + xy[1] - 48;
	while (i <= 6)
	{
		x = tetri_arr[i] + xy[0] - 48;
		y = tetri_arr[i + 1] + xy[1] - 48;
		map[y][x] = character;
		i += 2;
	}
}

int		recursion(char **tetri_arr, char map[16][16], int size, char *c)
{
	int		i;
	int		xy[2];

	i = 0;
	xy[1] = 0;
	if (tetri_arr[i] == NULL)
		return (1);
	while ((tetri_arr[i][7] - 48 + xy[1]) < size)
	{
		xy[0] = 0;
		while ((tetri_arr[i][4] - 48 + xy[0]) < size)
		{
			if (overlap(map, tetri_arr[i], xy[0], xy[1]) == 8)
			{
				place(tetri_arr[i], map, c[i], xy);
				if (recursion(&tetri_arr[i + 1], map, size, &c[i + 1]) == 1)
					return (1);
				else
					place(tetri_arr[i], map, '.', xy);
			}
			xy[0]++;
		}
		xy[1]++;
	}
	return (0);
}

void	set_board(int size, char map[16][16])
{
	int		x;
	int		y;

	y = -1;
	while (++y < size)
	{
		x = -1;
		while (++x < size)
			map[y][x] = '.';
	}
}

void	solve(char **tetri_arr, int tetri_count)
{
	char	map[16][16];
	int		size;
	char	*character;

	character = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size = 2;
	while (size * size < tetri_count * 4)
		size++;
	set_board(size, map);
	while (recursion(tetri_arr, map, size, character) == 0)
	{
		size++;
		set_board(size, map);
	}
	print_map(map, size);
}
