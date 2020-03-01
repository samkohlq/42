/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:47:36 by shguan            #+#    #+#             */
/*   Updated: 2019/09/20 11:07:41 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ch_dst;
	unsigned char	*ch_src;

	if (!dst && !src && len > 0)
		return (NULL);
	ch_src = (unsigned char*)src;
	ch_dst = (unsigned char*)dst;
	i = -1;
	if (ch_dst > ch_src)
		while (len--)
			ch_dst[len] = ch_src[len];
	else
		while (++i < len)
			ch_dst[i] = ch_src[i];
	return (ch_dst);
}
