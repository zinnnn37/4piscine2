/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:38:41 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/24 17:40:34 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (src[cnt] != '\0')
	{
		if (i < size - 1 && size != 0)
		{
			dest[i] = src[i];
			i++;
			cnt++;
		}
		else
			cnt++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (cnt);
}
