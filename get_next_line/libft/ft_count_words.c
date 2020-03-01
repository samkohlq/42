/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:51:25 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 14:52:22 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *str, char c)
{
	size_t	words;
	int		in_word;

	in_word = 0;
	words = 0;
	while (*str)
	{
		if (!in_word && *str != c)
			words++;
		if (*str == c)
			in_word = 0;
		else
			in_word = 1;
		str++;
	}
	return (words);
}
