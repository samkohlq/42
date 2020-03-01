/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:14:43 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 12:40:54 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t s_len;

	s_len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + s_len);
	while (s_len-- > 0)
	{
		if (*(s + s_len) == c)
			return ((char *)(s + s_len));
	}
	return (NULL);
}
