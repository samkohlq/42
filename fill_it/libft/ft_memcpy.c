/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:40:50 by shguan            #+#    #+#             */
/*   Updated: 2019/09/20 11:25:09 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (!dst && !src && n > 0)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n--)
		d[n] = s[n];
	return (d);
}
