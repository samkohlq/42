/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:46:13 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 17:07:31 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if ((!len || !haystack) && !*needle)
		return ((char*)haystack);
	while (*haystack && len-- > 0)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i] && i <= len)
			i++;
		if (!needle[i])
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
