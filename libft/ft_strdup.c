/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:19:31 by skoh              #+#    #+#             */
/*   Updated: 2019/09/17 10:49:21 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dst;

	if (!(dst = (char *)(malloc(sizeof(char) * ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(dst, s1);
	return (dst);
}
