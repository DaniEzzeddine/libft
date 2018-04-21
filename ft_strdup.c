/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:25:50 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:48:53 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (len + 1 >= 0)
	{
		new_str[len] = s1[len];
		len--;
	}
	return (new_str);
}
