/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 04:33:54 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/21 14:13:56 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	sym;
	size_t			i;

	sym = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == sym)
			return (str + i);
		i++;
	}
	return (NULL);
}
