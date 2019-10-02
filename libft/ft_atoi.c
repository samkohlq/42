/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:09:09 by skoh              #+#    #+#             */
/*   Updated: 2019/09/25 16:45:06 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
