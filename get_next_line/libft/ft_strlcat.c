/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:43:37 by skoh              #+#    #+#             */
/*   Updated: 2019/09/17 14:52:44 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t ctr_dst;
	size_t ctr_src;

	ctr_dst = 0;
	ctr_src = 0;
	while (dst[ctr_dst] != '\0' && ctr_dst < dstsize)
		ctr_dst++;
	while (src[ctr_src] != '\0' && (ctr_dst + ctr_src + 1) < dstsize)
	{
		dst[ctr_dst + ctr_src] = src[ctr_src];
		ctr_src++;
	}
	if (ctr_dst < dstsize)
		dst[ctr_dst + ctr_src] = '\0';
	return (ctr_dst + ft_strlen(src));
}
