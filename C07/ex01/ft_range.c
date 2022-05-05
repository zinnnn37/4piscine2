/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:37:04 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/04 21:30:48 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long long	range;
	int			i;
	int			*p_arr;

	range = max - min;
	if (range <= 0)
		return (0);
	p_arr = (int *)malloc(sizeof(int) * range);
	if (!p_arr)
		return (0);
	i = 0;
	while (i < range)
	{
		p_arr[i] = min;
		i++;
		min++;
	}
	return (p_arr);
}
