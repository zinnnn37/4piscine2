/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <minjinki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:23:54 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/17 21:39:38 by yeongkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printchar(int w, int h, int x, int y)
{
	if (h == 0 && w == 0)
		ft_putchar('/');
	else if ((h == 0 && w == x) || (h == y && w == 0))
		ft_putchar('\\');
	else if (h == y && w == x)
		ft_putchar('/');
	else if (h == 0 || h == y || w == 0 || w == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	h;
	int	w;

	if (x <= 0 || y <= 0)
		return ;
	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			ft_printchar(w, h, x - 1, y - 1);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
