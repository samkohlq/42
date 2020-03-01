/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:01:30 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 16:41:15 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		ctr;

	ctr = ft_nbrlen(n);
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (!(str = (char *)(malloc(sizeof(char) * (ctr + 1)))))
		return (NULL);
	str[ctr--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[ctr--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
