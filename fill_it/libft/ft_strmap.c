/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:58:46 by shguan            #+#    #+#             */
/*   Updated: 2019/09/18 17:04:28 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	size_t	l;
	char	*r;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	r = ft_strnew(l);
	while (l-- > 0 && r)
		r[l] = f(s[l]);
	return (r);
}
