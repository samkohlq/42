/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:03:28 by skoh              #+#    #+#             */
/*   Updated: 2019/09/17 13:21:35 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int ctr_s1;
	int ctr_s2;

	ctr_s1 = 0;
	while (s1[ctr_s1] != '\0')
		ctr_s1++;
	ctr_s2 = 0;
	while (s2[ctr_s2] != '\0')
	{
		s1[ctr_s1 + ctr_s2] = s2[ctr_s2];
		ctr_s2++;
	}
	s1[ctr_s1 + ctr_s2] = '\0';
	return (s1);
}
