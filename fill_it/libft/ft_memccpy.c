/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:14:36 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 17:12:43 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch_dst;
	unsigned char	*ch_src;

	i = -1;
	ch_src = (unsigned char*)src;
	ch_dst = (unsigned char*)dst;
	while (++i < n)
	{
		ch_dst[i] = ch_src[i];
		if (ch_src[i] == (unsigned char)c)
			return (dst + i + 1);
	}
	return (0);
}
