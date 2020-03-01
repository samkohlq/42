/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shguan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:31:36 by shguan            #+#    #+#             */
/*   Updated: 2019/09/19 17:49:11 by shguan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*r;

	if (!(r = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	r->content = NULL;
	r->content_size = 0;
	if (content)
	{
		if (!(r->content = ft_memalloc((content_size))))
		{
			free(r);
			return (NULL);
		}
		ft_memcpy(r->content, (void*)content, content_size);
		r->content_size = content_size;
	}
	r->next = NULL;
	return (r);
}
