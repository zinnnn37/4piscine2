/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:02:17 by minjinki          #+#    #+#             */
/*   Updated: 2022/04/27 14:27:20 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	g_check_three[4][4];
int	g_check_four[4][4];
int	g_grid[4][4];

void	ft_print_grid(char grid[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &grid[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_print_check(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*
void	ft_find_four(char **grid)
{
	// put 4 in grid
}

void ft_find_three(char **grid)
{
	// put 3 in grid
}
void ft_find_number(char **grid)
{
	// put 1 and 2 in grid
}
int ft_col_valid(void)
{
	// check if column is valid or not
	return (0);
}
int	ft_row_valid(void)
{
	// check if row i valid or not
	return (0);
}
int	ft_tester(void)
{
	// put number on gird
	if (ft_col_valid() == 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (ft_row_valid() == 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	return (1);
}
int	ft_row_col_valid(char row_col[4][4])
{
	return (0);
}

int	ft_find_ans(char row_col[4][4])
{
	ft_find_four(row_col);
	//ft_find_three();
	//ft_find_number();
	if (ft_tester() == 0)
		return (0);
	else
		ft_print_grid(grid);
	return (0);
}
*/

int	ft_cnt_input(char *input)
{
	int	cnt;

	cnt = 0;
	while (*input != '\0')
	{
		cnt++;
		input++;
	}
	if (cnt < 31 || cnt > 31)
		return (0);
	return (1);
}

void	ft_init_three(int i, int j)
{
	if (i == 0)
		g_check_three[i][j] = 1;
	else if (i == 1)
		g_check_three[3][j] = 1;
	else if (i == 2)
		g_check_three[j][0] = 1;
	else
		g_check_three[j][3] = 1;
}

void	ft_init_four(int i, int j)
{
	if (i == 0)
	{
		g_grid[i][j] = 4;
		g_check_four[i][j] = 1;
		g_check_three[i][j] = 1;
	}
	else if (i == 1)
	{
		g_grid[3][j] = 4;
		g_check_four[3][j] = 1;
		g_check_three[3][j] = 1;
	}
	else if (i == 2)
	{
		g_grid[j][0] = 4;
		g_check_four[j][0] = 1;
		g_check_three[j][0] = 1;
	}
	else
	{
		g_grid[j][3] = 4;
		g_check_four[j][3] = 1;
		g_check_three[j][3] = 1;
	}
}

void	ft_init(char row_col[][4], char input, int i, int j)
{
	if (input != ' ')
	{
		if (input == '3')
			ft_init_three(i, j);
		else if (input == '1')
			ft_init_four(i, j);
		row_col[i][j++] = input;
	}
}

int	ft_row_col(char row_col[4][4], char *input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_cnt_input(input) == 1)
	{
		while (i != 4)
		{
			if (*input < '1' || *input > '4')
				return (0);
			ft_init(row_col, *input, i, j);
			input++;
			j++;
			if (j % 4 == 0)
			{
				i++;
				j = 0;
			}
			input++;
		}
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	char	row_col[4][4];

	if (argc < 2 || argc > 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		if (ft_row_col(row_col, argv[1]) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		else
		{
			write(1, "check_four:\n", 12);
			ft_print_check(g_check_four);
			write(1, "\ncheck_three:\n", 14);
			ft_print_check(g_check_three);
			write(1, "\ninput:\n", 8);
			ft_print_grid(row_col);
			write(1, "\noutput:\n", 9);
			ft_print_check(g_grid);
		}
	}
	return (0);
}
