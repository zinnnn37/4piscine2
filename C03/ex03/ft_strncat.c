/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:45:47 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/25 20:17:02 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	si;
	unsigned int	di;

	di = 0;
	while (dest[di] != '\0')
		di++;
	si = 0;
	while (src[si] != '\0' && si < nb)
	{
		dest[di] = src[si];
		si++;
		di++;
	}
	dest[di] = '\0';
	return (dest);
}
