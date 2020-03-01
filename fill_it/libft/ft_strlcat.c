/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:40:44 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 17:51:26 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	len;

	len = ft_strlen(d);
	if (n <= len)
		return (n + ft_strlen(s));
	n -= (len + 1);
	while (*s && n--)
		d[len++] = *s++;
	d[len] = 0;
	return (len + ft_strlen(s));
}
