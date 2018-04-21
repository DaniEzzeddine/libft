/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:03:16 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:11:25 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstbuf;
	t_list	*head;

	head = NULL;
	if (!lst || !f)
		return (NULL);
	lstbuf = f(lst);
	head = lstbuf;
	lst = lst->next;
	while (lst)
	{
		lstbuf->next = f(lst);
		lstbuf = lstbuf->next;
		lst = lst->next;
	}
	return (head);
}
