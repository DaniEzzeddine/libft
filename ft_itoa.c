/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 13:53:40 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 17:51:32 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cd(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	negat(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		neg;

	neg = negat(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (neg)
		n = -n;
	len = neg + cd(n);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	while (len--)
	{
		res[len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
