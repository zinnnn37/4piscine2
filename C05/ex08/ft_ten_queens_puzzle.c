/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:13:16 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/30 20:25:01 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *brd)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = brd[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

int	ft_is_valid(int i, int *brd)
{
	int	cnt;

	cnt = 0;
	while (cnt < i)
	{
		if (brd[i] == brd[cnt]
			|| ft_abs(i - cnt) == ft_abs(brd[i] - brd[cnt]))
			return (0);
		cnt++;
	}
	return (1);
}

int	ft_queens(int n, int *brd, int ans)
{
	int	q;

	if (n == 10)
	{
		ft_print(brd);
		ans++;
		return (ans);
	}
	else
	{
		q = 0;
		while (q < 10)
		{
			brd[n] = q++;
			if (ft_is_valid(n, brd))
				ans = ft_queens(n + 1, brd, ans);
		}
	}
	return (ans);
}

int	ft_ten_queens_puzzle(void)
{
	int	brd[10];
	int	ans;
	int	i;

	i = 0;
	ans = 0;
	return (ft_queens(0, brd, ans));
}
