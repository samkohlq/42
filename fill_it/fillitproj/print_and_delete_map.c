/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_and_delete_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:58:19 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:57:28 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_map(char map[16][16], int size)
{
	int k;

	k = -1;
	while (++k < size)
	{
		write(1, map[k], size);
		write(1, "\n", 1);
	}
}
