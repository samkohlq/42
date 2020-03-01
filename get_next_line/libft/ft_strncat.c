/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:25:04 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 12:23:42 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len_s1;
	size_t len_s2;
	size_t ctr;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s2 < n)
		n = len_s2;
	ctr = 0;
	while (n > 0)
	{
		s1[len_s1 + ctr] = s2[ctr];
		ctr++;
		n--;
	}
	s1[len_s1 + ctr] = '\0';
	return (s1);
}
