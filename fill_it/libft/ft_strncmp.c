/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:58:30 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 17:17:42 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	if (!n)
		return (0);
	while (*us1 && *us2 && *us1 == *us2 && n > 0)
	{
		us1++;
		us2++;
		n--;
	}
	if (n > 0)
		return (*us1 - *us2);
	return (0);
}
