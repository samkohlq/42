/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:52:18 by skoh              #+#    #+#             */
/*   Updated: 2019/09/19 16:53:11 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fillword(const char *str, char c, int *i)
{
	char	*word;
	int		w_ctr;

	if (!(word = (char *)malloc(sizeof(char) * (ft_strlen(str)))))
		return (NULL);
	w_ctr = 0;
	while (str[*i] != c && str[*i])
	{
		word[w_ctr] = str[*i];
		w_ctr++;
		*i += 1;
	}
	word[w_ctr] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (word);
}
