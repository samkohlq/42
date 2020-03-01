/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:19:33 by shguan            #+#    #+#             */
/*   Updated: 2019/09/18 17:19:57 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start + len)
		return (NULL);
	ret = ft_strnew(len);
	while (len-- && ret)
		ret[len] = s[start + len];
	return (ret);
}
