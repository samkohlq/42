/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:20:11 by skoh              #+#    #+#             */
/*   Updated: 2019/09/22 15:42:56 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*free_me;
	t_list	*tmp;

	if (!alst || !*alst)
		return ;
	free_me = *alst;
	while (free_me)
	{
		tmp = free_me;
		ft_lstdelone(&free_me, del);
		free_me = tmp->next;
	}
	*alst = NULL;
}
