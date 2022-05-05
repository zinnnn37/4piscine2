/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:54:10 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/28 11:22:36 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_print_arr(char **argv, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		while (*argv[i] != 0)
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		cmp;
	char	*temp;

	i = 2;
	while (i < argc)
	{
		cmp = ft_strcmp(argv[i - 1], argv[i]);
		if (cmp > 0)
		{
			temp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = temp;
			i = 2;
		}
		else
			i++;
	}
	ft_print_arr(argv, argc);
	return (0);
}
