/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:59:33 by skoh              #+#    #+#             */
/*   Updated: 2019/09/17 17:45:00 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int h_ctr;
	int n_ctr;

	h_ctr = 0;
	if (*needle == '\0')
		return ((char *)haystack + h_ctr);
	while (haystack[h_ctr] != '\0')
	{
		n_ctr = 0;
		while (haystack[h_ctr + n_ctr] != '\0' &&
				haystack[h_ctr + n_ctr] == needle[n_ctr])
		{
			if (needle[n_ctr + 1] == '\0')
				return ((char *)haystack + h_ctr);
			n_ctr++;
		}
		h_ctr++;
	}
	return (NULL);
}
