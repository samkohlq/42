/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:51:06 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:10:21 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*nstr;
	size_t	len;
	int		ctr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(nstr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ctr = 0;
	while (s[ctr] != '\0')
	{
		nstr[ctr] = f(s[ctr]);
		ctr++;
	}
	nstr[ctr] = '\0';
	return (nstr);
}
