/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:20:10 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/21 14:59:14 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while (a[0] <= '6')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 5);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
	write(1, "789", 3);
}
