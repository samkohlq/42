/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:34:52 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 15:39:49 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	ret = f(lst);
	tmp = ret;
	while (lst->next)
	{
		tmp->next = f(lst->next);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (ret);
}
