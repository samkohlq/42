/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:42:23 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 14:46:55 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *t;
	t_list *p;

	if (!*alst)
		return ;
	t = *alst;
	while (t->next)
	{
		p = t;
		t = t->next;
		ft_lstdelone(&p, del);
	}
	ft_lstdelone(&t, del);
	*alst = NULL;
}
