/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:39:24 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:18:33 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(const char *str, char c)
{
	int		words;
	int		ctr;
	char	**split;
	int		s_ctr;

	if (!str)
		return (NULL);
	ctr = 0;
	words = ft_count_words(str, c);
	if (!(split = (char **)malloc(sizeof(split) * (words + 1))))
		return (NULL);
	while (str[ctr] == c && str[ctr] != '\0')
		ctr++;
	s_ctr = 0;
	while (s_ctr < words && str[ctr] != '\0')
	{
		split[s_ctr] = ft_fillword(str, c, &ctr);
		s_ctr++;
	}
	split[s_ctr] = NULL;
	return (split);
}
