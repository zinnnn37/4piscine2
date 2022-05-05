/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:15:06 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/02 21:54:36 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(char *src)
{
	int	len;

	len = 0;
	while (*src)
	{
		src++;
		len++;
	}
	return (len + 1);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*p_arr;

	len = ft_getlen(src);
	p_arr = (char *)malloc(sizeof(char) * len);
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
