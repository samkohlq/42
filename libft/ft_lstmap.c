/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:51:44 by skoh              #+#    #+#             */
/*   Updated: 2019/09/22 17:57:14 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n_lst;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	if (!(n_lst = f(lst)))
		return (NULL);
	tmp = n_lst;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (!(tmp->next))
		{
			free(tmp->next);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (n_lst);
}
