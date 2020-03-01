/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:49:35 by skoh              #+#    #+#             */
/*   Updated: 2019/09/24 15:07:17 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t h_ctr;
	size_t n_ctr;

	h_ctr = 0;
	if (*n == '\0' || n == NULL)
		return ((char *)h);
	while (h[h_ctr] != '\0' && h_ctr < len)
	{
		n_ctr = 0;
		while (h[h_ctr + n_ctr] == n[n_ctr] &&
				(h_ctr + n_ctr < len))
		{
			if (n[n_ctr + 1] == '\0')
				return ((char *)h + h_ctr);
			n_ctr++;
		}
		h_ctr++;
	}
	return (NULL);
}
