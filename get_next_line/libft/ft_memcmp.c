/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:21:55 by skoh              #+#    #+#             */
/*   Updated: 2019/09/19 11:54:10 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			ctr;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	ctr = 0l;
	while (ctr < n)
	{
		if (str1[ctr] != str2[ctr])
			return (str1[ctr] - str2[ctr]);
		ctr++;
	}
	return (0);
}
