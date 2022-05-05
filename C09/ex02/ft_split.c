/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:54:31 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/05 13:38:11 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}

int	ft_count(char *str, char *sep)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], sep) == 0 && ft_is_sep(str[i + 1], sep) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}

void	ft_copy(char *res, char *str, char *sep)
{
	int	i;

	i = 0;
	while (ft_is_sep(str[i], sep) == 0)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
}

void	ft_malloc(char **split, char *str, char *sep)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (str[i + j] && ft_is_sep(str[i + j], sep) == 0)
				j++;
			split[cnt] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[cnt] == 0)
				return ;
			ft_copy(split[cnt], str + i, sep);
			i += j;
			cnt++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		cnt;

	cnt = ft_count(str, charset);
	res = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (res == 0)
		return (0);
	res[cnt] = 0;
	ft_malloc(res, str, charset);
	return (res);
}
