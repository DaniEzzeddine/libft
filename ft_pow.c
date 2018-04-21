/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 10:24:54 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/21 10:25:06 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_pow(int n, unsigned int p)
{
	unsigned int	i;
	long long int	res;

	if (p == 0)
		return (1);
	res = (long long int)n;
	i = 0;
	while (++i < p)
		res *= res;
	return (res);
}
