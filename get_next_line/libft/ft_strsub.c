/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:38:50 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:16:03 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	ctr;

	if (!s)
		return (NULL);
	if (!(substr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ctr = 0;
	while (ctr < len)
	{
		substr[ctr] = s[start];
		ctr++;
		start++;
	}
	substr[ctr] = '\0';
	return (substr);
}
