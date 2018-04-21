/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 21:13:04 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:58:18 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		length;
	size_t	i;

	i = 0;
	length = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[length + i] = s2[i];
		i++;
	}
	s1[length + i] = '\0';
	return (s1);
}
