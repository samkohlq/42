/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:15:32 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:10:58 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		nstr[ctr] = f(ctr, s[ctr]);
		ctr++;
	}
	nstr[ctr] = '\0';
	return (nstr);
}
