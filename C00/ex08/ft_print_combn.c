/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:06:48 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/21 14:52:14 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dfs(int i, char cur, char *num, int n)
{
	if (i == n)
	{
		if (num[n - 1] != n - 1 + 48)
			write(1, ", ", 2);
		write(1, num, n);
		return ;
	}
	while (cur <= '9')
	{
		num[i] = cur;
		ft_dfs(i + 1, cur + 1, num, n);
		cur++;
	}
}

void	ft_print_combn(int n)
{
	char	num[9];

	if (n > 0 && n < 10)
		ft_dfs(0, '0', num, n);
}
