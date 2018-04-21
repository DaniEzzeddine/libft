/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:21:18 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:38:58 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *str, char c)
{
	int w;
	int is_last_space;

	w = 0;
	is_last_space = 1;
	while (*str)
	{
		if (!(*str == c) && is_last_space)
		{
			w++;
			is_last_space = 0;
		}
		else if (*str == c)
			is_last_space = 1;
		str++;
	}
	return (w);
}

static int		get_next_word_pos(char *str, int pos, char c)
{
	while (str[pos] == c)
		pos++;
	return (pos);
}

static int		get_word_length(char *str, int pos, char c)
{
	int length;

	length = 0;
	while (!(str[pos + length] == c))
		length++;
	return (length);
}

static int		set_word(char **res, char *str, int pos, char c)
{
	int l;
	int p;
	int i;

	p = get_next_word_pos(str, pos, c);
	l = get_word_length(str, p, c);
	*res = (char*)malloc(sizeof(char) * l + 1);
	i = 0;
	while (i < l)
	{
		(*res)[i] = str[p + i];
		i++;
	}
	(*res)[i] = '\0';
	return (p + l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		p;
	char	*str;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	p = 0;
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char*) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		p = set_word(res + i, str, p, c);
		i++;
	}
	res[i] = 0;
	return (res);
}
