/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_validate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:49:20 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:57:06 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*valid_shape(char *buf)
{
	int		ctr1;
	int		ctr2;
	char	tmp[20];
	char	*arr;
	char	*valid;

	ctr1 = 0;
	ctr2 = 0;
	while (ctr1 < 19)
	{
		if (buf[ctr1] == '#' || buf[ctr1] == '.')
		{
			tmp[ctr2] = buf[ctr1];
			ctr2++;
		}
		ctr1++;
	}
	tmp[ctr2] = '\0';
	arr = trim_dots(tmp);
	valid = match(arr);
	free(arr);
	return (valid);
}

int		char_check(char *buf)
{
	int		ctr;
	int		hash_count;

	ctr = 0;
	hash_count = 0;
	while (ctr < 19)
	{
		if (buf[ctr] != '#' & buf[ctr] != '.' && buf[ctr] != '\n')
			return (0);
		if (buf[ctr] == '#')
			hash_count++;
		ctr++;
	}
	if (buf[ctr] != '\n' && hash_count != 4)
		return (0);
	return (1);
}

int		build_valid_tetri(int ret, char *buf)
{
	char	**tetri_arr;
	int		ctr;
	int		ctr2;
	int		tetri_count;

	tetri_count = (ret + 1) / 21;
	tetri_arr = (char **)(malloc(sizeof(char *) * (tetri_count + 1)));
	ctr = 0;
	ctr2 = 0;
	tetri_arr[tetri_count] = NULL;
	while (ctr < ret)
	{
		if (char_check(&buf[ctr]) == 0)
			return (0);
		if ((tetri_arr[ctr2] = valid_shape(&buf[ctr])) == NULL)
			return (0);
		ctr += 21;
		ctr2++;
	}
	solve(tetri_arr, tetri_count);
	free(tetri_arr);
	return (1);
}

int		file_is_valid(int fd)
{
	if (fd < 0 || fd > OPEN_MAX)
		return (0);
	return (1);
}

int		parse_file(int fd)
{
	int		ret;
	char	buf[546];
	int		i;

	i = 0;
	if (file_is_valid(fd) == 0)
		return (0);
	ret = read(fd, buf, 545);
	buf[ret] = '\0';
	close(fd);
	if ((ret < 19 || ret > 544) || (ret + 1) % 21 != 0)
		return (0);
	while (i < (ret - 1))
	{
		if ((i + 1) % 21 == 0)
		{
			if (buf[i] != '\n')
				return (0);
		}
		i++;
	}
	if (build_valid_tetri(ret, buf) == 0)
		return (0);
	return (1);
}
