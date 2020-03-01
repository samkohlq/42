/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_dots.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:55:28 by skoh              #+#    #+#             */
/*   Updated: 2019/11/08 14:57:36 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*match(char *arr)
{
	char *tetri_str;

	tetri_str = NULL;
	(ft_strcmp(arr, SHAPE_1) == 0) && (tetri_str = "00103020");
	(ft_strcmp(arr, SHAPE_2) == 0) && (tetri_str = "00010203");
	(ft_strcmp(arr, SHAPE_3) == 0) && (tetri_str = "00101101");
	(ft_strcmp(arr, SHAPE_4) == 0) && (tetri_str = "00011112");
	(ft_strcmp(arr, SHAPE_5) == 0) && (tetri_str = "10012011");
	(ft_strcmp(arr, SHAPE_6) == 0) && (tetri_str = "10011102");
	(ft_strcmp(arr, SHAPE_7) == 0) && (tetri_str = "00102111");
	(ft_strcmp(arr, SHAPE_8) == 0) && (tetri_str = "10012111");
	(ft_strcmp(arr, SHAPE_9) == 0) && (tetri_str = "00102011");
	(ft_strcmp(arr, SHAPE_10) == 0) && (tetri_str = "00011102");
	(ft_strcmp(arr, SHAPE_11) == 0) && (tetri_str = "10011112");
	(ft_strcmp(arr, SHAPE_12) == 0) && (tetri_str = "00011002");
	(ft_strcmp(arr, SHAPE_13) == 0) && (tetri_str = "00102021");
	(ft_strcmp(arr, SHAPE_14) == 0) && (tetri_str = "10021112");
	(ft_strcmp(arr, SHAPE_15) == 0) && (tetri_str = "00012111");
	(ft_strcmp(arr, SHAPE_16) == 0) && (tetri_str = "00101112");
	(ft_strcmp(arr, SHAPE_17) == 0) && (tetri_str = "00102001");
	(ft_strcmp(arr, SHAPE_18) == 0) && (tetri_str = "00011202");
	(ft_strcmp(arr, SHAPE_19) == 0) && (tetri_str = "20012111");
	if (tetri_str == NULL)
		return (NULL);
	return (tetri_str);
}

char	*trim_dots(char const *s)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	t_ctr;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == '.')
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (s[end] == '.')
		end--;
	len = end - start + 1;
	if (!(trimmed = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	t_ctr = 0;
	while (len-- > 0)
		trimmed[t_ctr++] = s[start++];
	trimmed[t_ctr] = '\0';
	return (trimmed);
}
