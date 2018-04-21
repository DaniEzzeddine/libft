/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:56:05 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:47:58 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlink;

	newlink = (t_list *)ft_memalloc(sizeof(t_list));
	if (!newlink)
		return (NULL);
	newlink->next = NULL;
	if (!content)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
		return (newlink);
	}
	newlink->content = malloc(content_size);
	ft_memcpy(newlink->content, content, content_size);
	newlink->content_size = content_size;
	return (newlink);
}
