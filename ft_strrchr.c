/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:04:50 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 13:49:13 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int sw;

	i = 0;
	sw = ft_strlen(s);
	while (sw - i >= 0)
	{
		if (s[sw - i] == (unsigned char)c)
			return ((char *)s + sw - i);
		i++;
	}
	return (NULL);
}
