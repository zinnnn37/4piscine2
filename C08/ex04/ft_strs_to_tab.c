/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:16:36 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/03 17:41:43 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_getlen(char *src)
{
	int	len;

	len = 0;
	while (*src)
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*p_arr;

	len = ft_getlen(src);
	p_arr = (char *)malloc(sizeof(char) * len + 1);
	if (!p_arr)
		return (0);
	i = 0;
	while (src[i])
	{
		p_arr[i] = src[i];
		i++;
	}
	p_arr[i] = 0;
	return (p_arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p_strct;
	int			i;

	p_strct = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!p_strct)
		return (0);
	i = 0;
	while (i < ac)
	{
		p_strct[i].size = ft_getlen(av[i]);
		p_strct[i].str = av[i];
		p_strct[i].copy = ft_strdup(av[i]);
		i++;
	}
	p_strct[i].size = 0;
	p_strct[i].str = 0;
	p_strct[i].copy = 0;
	return (p_strct);
}
