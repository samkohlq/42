/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:02:48 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:56:27 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>
# include "../libft/libft.h"

# define SHAPE_1 "####"
# define SHAPE_2 "#...#...#...#"

# define SHAPE_3 "##..##"

# define SHAPE_4 "#...##...#"
# define SHAPE_5 "##.##"
# define SHAPE_6 "#..##..#"
# define SHAPE_7 "##...##"

# define SHAPE_8 "#..###"
# define SHAPE_9 "###..#"
# define SHAPE_10 "#...##..#"
# define SHAPE_11 "#..##...#"

# define SHAPE_12 "##..#...#"
# define SHAPE_13 "###...#"
# define SHAPE_14 "#...#..##"
# define SHAPE_15 "#...###"
# define SHAPE_16 "##...#...#"
# define SHAPE_17 "###.#"
# define SHAPE_18 "#...#...##"
# define SHAPE_19 "#.###"

int		parse_file(int fd);
int		file_is_valid(int fd);
int		tetri_are_valid(int ret, char *buf);
int		char_check(char *buf);
char	*valid_shape(char *buf);
char	*match(char *arr);
char	*trim_dots(char const *s);
void	solve(char **tetri_arr, int tetri_count);
void	set_board(int size, char map[16][16]);
int		recursion(char **tetri_arr, char map[16][16], int size, char *c);
void	place(char *tetri_arr, char map[16][16], char character, int xy[2]);
int		overlap(char map[16][16], char *tetri_arr, int a, int b);
void	print_map(char map[16][16], int size);
#endif
