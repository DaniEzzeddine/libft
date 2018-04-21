/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 22:39:56 by dezzeddi          #+#    #+#             */
/*   Updated: 2018/04/21 10:27:37 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max(int *arr, int n)
{
	int i;
	int max;

	max = arr[0];
	i = 1;
	while (i < n)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}