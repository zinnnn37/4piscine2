/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:14:42 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/02 13:40:22 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_check_sign(char *str, char *base)
{
	int	minus;

	minus = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= (-1);
		str++;
		if (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
			return (0);
	}
	if (ft_inbase(*str, base) == -1)
		return (0);
	return (minus);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;
	int	res;
	int	cnt;

	cnt = ft_check_base(base);
	if (cnt == 0)
		return (0);
	res = 0;
	minus = ft_check_sign(str, base);
	if (minus == 0)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		if (ft_inbase(str[i], base) != -1)
			res = res * cnt + ft_inbase(str[i], base);
		i++;
		if (ft_inbase(str[i - 1], base) != -1 && ft_inbase(str[i], base) == -1)
			break ;
	}
	return (res * minus);
}
