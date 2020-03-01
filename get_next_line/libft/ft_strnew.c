/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:37:19 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 13:56:22 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	ctr;

	if (!(ptr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ctr = 0;
	while (ctr < size)
	{
		ptr[ctr] = '\0';
		ctr++;
	}
	ptr[ctr] = '\0';
	return (ptr);
}
