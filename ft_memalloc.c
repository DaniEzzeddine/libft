/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:56:03 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:55:02 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mas;

	mas = malloc(size);
	if (!mas)
		return (NULL);
	ft_bzero(mas, size);
	return (mas);
}
