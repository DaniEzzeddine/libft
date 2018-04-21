/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 20:08:40 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 17:55:32 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(s1);
	while (s2[i])
	{
		s1[length + i] = s2[i];
		i++;
	}
	s1[length + i] = '\0';
	return (s1);
}
