/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:40:19 by shguan            #+#    #+#             */
/*   Updated: 2019/09/18 14:44:36 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *d, const char *s)
{
	size_t	i;

	if (!*d && !*s)
		return ((char*)d);
	while (*d)
	{
		i = 0;
		while (s[i] && s[i] == d[i])
			i++;
		if (!s[i])
			return ((char*)d);
		d++;
	}
	return (0);
}
