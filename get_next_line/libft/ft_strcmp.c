/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:02:38 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 13:22:26 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int ctr;

	ctr = 0;
	while (s1[ctr] != '\0' && s2[ctr] != '\0' && s1[ctr] == s2[ctr])
		ctr++;
	return ((unsigned char)s1[ctr] - (unsigned char)s2[ctr]);
}
