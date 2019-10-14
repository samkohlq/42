/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patterns.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:09:34 by skoh              #+#    #+#             */
/*   Updated: 2019/10/14 16:21:15 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PATTERNS_H
# define PATTERNS_H

# include <unistd.h>

int		type_is_valid(char *type);
void	print_pattern(char **type, int col, int row);
void	first_row(char *type, int col_ctr, int col);
void	last_row(char *type, int col_ctr, int col);
void	middle_row(char *type, int col_ctr, int col);
void	assign_char(char *row, char **type, char *first, char *mid, char *last);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(const char *str);
int		ft_iswhitespace(char c);

#endif
