/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:32:29 by skoh              #+#    #+#             */
/*   Updated: 2019/09/22 18:08:19 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t ctr;

	ctr = 0;
	if (!n)
		return (1);
	if (s1 && s2 && n)
	{
		while (ctr < n && s1[ctr] != '\0' && s2[ctr] != '\0')
		{
			if (s1[ctr] != s2[ctr])
				return (0);
			ctr++;
		}
		return (1);
	}
	return (0);
}
