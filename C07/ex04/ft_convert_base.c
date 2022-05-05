/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:44:53 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/04 17:38:47 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base);

int	ft_getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
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

int	ft_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;
	int	res;
	int	len;

	i = 0;
	minus = 1;
	res = 0;
	len = ft_getlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] && ft_inbase(str[i], base) != -1)
		res = res * len + ft_inbase(str[i++], base);
	return (minus * res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		in;
	char	*out;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (0);
	in = ft_atoi_base(nbr, base_from);
	out = ft_putnbr_base(in, base_to);
	return (out);
}
