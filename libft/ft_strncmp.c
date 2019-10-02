/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:16:44 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 13:21:23 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t ctr;

	ctr = 0;
	if (n == 0)
		return (0);
	while (ctr < n - 1 && s1[ctr] != '\0' && s2[ctr] != '\0'
			&& s1[ctr] == s2[ctr])
		ctr++;
	return ((unsigned char)s1[ctr] - (unsigned char)s2[ctr]);
}
