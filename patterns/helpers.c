/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:09:06 by skoh              #+#    #+#             */
/*   Updated: 2019/10/14 16:10:54 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "patterns.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		ft_putchar(str[ctr]);
		ctr++;
	}
}

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int ctr;
	int	exceeded;

	result = 0;
	sign = 1;
	ctr = 0;
	exceeded = 0;
	while (str[ctr] != '\0' && ft_iswhitespace(str[ctr]) == 1)
		ctr++;
	if (str[ctr] == '-' || str[ctr] == '+')
	{
		if (str[ctr++] == '-')
			sign = sign * -1;
	}
	while (str[ctr] != '\0' && (str[ctr] >= '0' && str[ctr] <= '9'))
	{
		result = (result * 10) + str[ctr++] - '0';
		if (++exceeded > 19)
			return (sign == 1) ? -1 : 0;
	}
	return (result * sign);
}

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}
