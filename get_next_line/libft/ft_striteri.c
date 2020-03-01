/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:43:44 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:53:28 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int ctr;

	ctr = 0;
	if (!s || !f)
		return ;
	while (s[ctr] != '\0')
	{
		f(ctr, &(s[ctr]));
		ctr++;
	}
}