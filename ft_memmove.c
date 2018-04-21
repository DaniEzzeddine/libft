/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:29:53 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 14:18:02 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	i = 0;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest)
		while (len--)
			*(dest + len) = *(source + len);
	else
		while (i < len)
		{
			*(dest + i) = *(source + i);
			i++;
		}
	return (dst);
}
