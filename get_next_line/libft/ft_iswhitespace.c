/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:42:53 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 16:44:17 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}
