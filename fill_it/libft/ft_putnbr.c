/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:02:17 by shguan            #+#    #+#             */
/*   Updated: 2019/09/20 10:10:28 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int tmp;

	tmp = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar('-');
		tmp = ft_abs(n);
	}
	if (tmp > 9)
		ft_putnbr(tmp / 10);
	ft_putchar(tmp % 10 + '0');
}
