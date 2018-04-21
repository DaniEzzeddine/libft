/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:22:40 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/19 15:22:54 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	m[13];
	int		counter;

	if (n < 0)
		ft_putchar('-');
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	counter = 0;
	while (n != 0)
	{
		m[counter] = n % 10;
		if (m[counter] < 0)
			m[counter] = -m[counter];
		n /= 10;
		counter++;
	}
	while (counter > 0)
	{
		ft_putchar(m[counter - 1] + '0');
		counter--;
	}
}
