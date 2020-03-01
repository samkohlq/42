/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:48:33 by skoh              #+#    #+#             */
/*   Updated: 2019/09/19 20:09:06 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t ctr;

	ctr = 0;
	while (ctr < len && src[ctr] != '\0')
	{
		dst[ctr] = src[ctr];
		ctr++;
	}
	while (ctr < len)
	{
		dst[ctr] = '\0';
		ctr++;
	}
	return (dst);
}
