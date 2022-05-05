/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongkim <yeongkim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:05:14 by yeongkim          #+#    #+#             */
/*   Updated: 2022/04/19 09:55:55 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printchar(int w, int h, int x, int y)
{
	if (h == 0 && (w == 0 || w == x))
		ft_putchar('o');
	else if (h == y && (w == 0 || w == x))
		ft_putchar('o');
	else if (w == x || w == 0)
		ft_putchar('|');
	else if (h == y || h == 0)
		ft_putchar('-');
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
