/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:49:28 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/01 11:13:57 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i <= 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
