/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:17:19 by skoh              #+#    #+#             */
/*   Updated: 2019/09/19 11:53:44 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	ctr;

	d = (char *)dst;
	s = (char *)src;
	if (d == s)
		return (dst);
	if (d > s)
	{
		ctr = len;
		while (ctr--)
		{
			d[ctr] = s[ctr];
		}
	}
	else
	{
		ctr = -1;
		while (++ctr < len)
		{
			d[ctr] = s[ctr];
		}
	}
	return (dst);
}
