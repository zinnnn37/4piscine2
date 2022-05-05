/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:24:47 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/29 19:54:53 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	res[32];
	int		i;
	int		cnt;
	long	nbr_l;

	cnt = ft_check_base(base);
	if (cnt == 0)
		return ;
	nbr_l = nbr;
	if (nbr_l < 0)
	{
		nbr_l = -nbr_l;
		write(1, "-", 1);
	}
	i = 0;
	if (nbr == 0)
		res[i++] = base[0];
	while (nbr_l > 0)
	{
		res[i++] = base[nbr_l % cnt];
		nbr_l = nbr_l / cnt;
	}
	while (--i >= 0)
		write(1, &res[i], 1);
}
