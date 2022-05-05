/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:34:39 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/21 14:20:25 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_transfer(int a, int b)
{
	ft_write(48 + a / 10);
	ft_write(48 + a % 10);
	ft_write(32);
	ft_write(48 + b / 10);
	ft_write(48 + b % 10);
	if (a != 98)
	{
		ft_write(44);
		ft_write(32);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_transfer(a, b);
			b++;
		}
		a++;
	}
}
