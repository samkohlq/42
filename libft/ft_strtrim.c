/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:12:44 by skoh              #+#    #+#             */
/*   Updated: 2019/09/20 17:26:59 by skoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	t_ctr;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	len = end - start + 1;
	if (!(trimmed = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	t_ctr = 0;
	while (len-- > 0)
		trimmed[t_ctr++] = s[start++];
	trimmed[t_ctr] = '\0';
	return (trimmed);
}
