/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:23:15 by shguan            #+#    #+#             */
/*   Updated: 2019/09/18 17:23:32 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	if (s1)
		while (*s1 && ret)
			ret[i++] = *s1++;
	if (s2)
		while (*s2 && ret)
			ret[i++] = *s2++;
	return (ret);
}
