/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 13:45:06 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 17:59:47 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long int		i;
	int				n;
	long long int	numb;

	i = 0;
	n = 0;
	numb = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\n') ||
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		n = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		numb = 10 * numb + (str[i] - '0');
		i++;
	}
	if (n == 1)
		return (-numb);
	return (numb);
}
