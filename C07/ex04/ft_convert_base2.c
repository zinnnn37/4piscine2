/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:52:43 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/05 13:32:25 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(char *str);

int	ft_prev(char **nbr, int *minus, long *nbr_l)
{
	*minus = 1;
	*nbr = (char *)malloc(sizeof(char) * 34);
	if (*nbr == 0)
		return (0);
	if (*nbr_l < 0)
	{
		*minus = -1;
		*nbr_l *= -1;
	}
	return (1);
}

char	*ft_rev_char(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = ft_getlen(str);
	i = 0;
	while (i < len - i - 1)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	*nbr_s;
	int		minus;
	int		len;
	int		cnt;

	nbr_l = nbr;
	if (ft_prev(&nbr_s, &minus, &nbr_l) == 0)
		return (0);
	len = ft_getlen(base);
	cnt = 0;
	if (nbr == 0)
	{
		nbr_s[0] = base[0];
		cnt = 1;
	}
	while (nbr_l > 0)
	{
		nbr_s[cnt++] = base[nbr_l % len];
		nbr_l = nbr_l / len;
	}
	if (minus == -1)
		nbr_s[cnt++] = '-';
	nbr_s[cnt] = 0;
	return (ft_rev_char(nbr_s));
}
