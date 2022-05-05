/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:21:54 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/04 16:58:34 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	si;
	int	di;

	di = 0;
	while (dest[di])
		di++;
	si = 0;
	while (src[si])
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (dest);
}

int	ft_getsize(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_getlen(str[i++]);
	len += ft_getlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p_arr;
	int		len;
	int		i;

	len = ft_getsize(size, strs, sep);
	if (size <= 0)
		len = 0;
	p_arr = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (++i < len + 1)
		p_arr[i] = 0;
	i = 0;
	while (i < size)
	{
		p_arr = ft_strcat(p_arr, strs[i]);
		if (i != size - 1)
			p_arr = ft_strcat(p_arr, sep);
		i++;
	}
	return (p_arr);
}
