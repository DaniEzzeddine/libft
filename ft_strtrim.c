/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 12:55:22 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/21 12:55:27 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*result(char *str1, const char *str2, int i, int leng)
{
	int j;

	j = 0;
	while (i <= leng)
	{
		str1[j] = str2[i];
		i++;
		j++;
	}
	return (str1);
}

char		*ft_strtrim(char const *s)
{
	char	*new_str;
	int		i;
	int		len;
	int		dif;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (len != 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	dif = len - i;
	if (dif >= 0)
		new_str = ft_strnew(dif + 1);
	else
		new_str = ft_strnew(0);
	if (!new_str)
		return (NULL);
	return (result(new_str, s, i, len));
}
