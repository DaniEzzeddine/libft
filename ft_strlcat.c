/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:48:55 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 14:10:36 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;
	int		j;

	j = 0;
	i = ft_strlen(dst);
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize < lendest + 1)
		return (lensrc + dstsize);
	if (dstsize > lendest + 1)
		while (i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	dst[i] = '\0';
	return (lendest + lensrc);
}
