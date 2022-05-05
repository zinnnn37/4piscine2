/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:30:24 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/25 15:05:39 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_len(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	di;
	unsigned int	si;

	si = ft_get_len(src);
	di = ft_get_len(dest);
	i = 0;
	if (size <= di)
		return (size + si);
	while (src[i] != '\0' && i < size - di - 1)
	{
		dest[di + i] = src[i];
		i++;
	}
	dest[di + i] = '\0';
	return (di + si);
}
