/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:04:42 by shguan            #+#    #+#             */
/*   Updated: 2019/09/18 17:06:28 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ret;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_strnew(len);
	while (len-- > 0 && ret)
		ret[len] = f(len, s[len]);
	return (ret);
}
