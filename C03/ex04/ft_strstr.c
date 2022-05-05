/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:00:09 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/25 18:29:53 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	si;
	int	ti;

	si = 0;
	if (*to_find == '\0')
		return (str);
	while (str[si] != '\0')
	{
		ti = 0;
		if (str[si] == to_find[ti])
		{
			while (str[si + ti] == to_find[ti])
			{
				ti++;
				if (to_find[ti] == '\0')
					return (&str[si]);
			}
		}
		si++;
	}
	return (0);
}
