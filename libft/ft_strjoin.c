/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:02:16 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:17:03 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		len;
	int		j_ctr;
	int		ctr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(joined = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	j_ctr = 0;
	while (s1[j_ctr] != '\0')
	{
		joined[j_ctr] = s1[j_ctr];
		j_ctr++;
	}
	ctr = 0;
	while (s2[ctr] != '\0')
	{
		joined[j_ctr] = s2[ctr];
		j_ctr++;
		ctr++;
	}
	joined[j_ctr] = '\0';
	return (joined);
}
