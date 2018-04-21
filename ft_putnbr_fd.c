/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:28:05 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/20 16:49:39 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	m[13];
	int		counter;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
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
		ft_putchar_fd(m[counter - 1] + '0', fd);
		counter--;
	}
}
