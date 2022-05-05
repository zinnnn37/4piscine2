/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C05_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/25 14:14:58 by joushin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex00/ft_iterative_factorial.c"
#include"ex01/ft_recursive_factorial.c"
#include"ex02/ft_iterative_power.c"
#include"ex03/ft_recursive_power.c"
#include"ex04/ft_fibonacci.c"
#include"ex05/ft_sqrt.c"
#include"ex06/ft_is_prime.c"
#include"ex07/ft_find_next_prime.c"
#include"ex08/ft_ten_queens_puzzle.c"
int main()
{

	{
		printf("\n----------------------ex00----------------------------\n");
		int a = 6;
		printf("input : %d \n",a);
		int result =ft_iterative_factorial(a);
		printf("%d : is output\n",result);
	}

	{
		printf("\n----------------------ex01----------------------------\n");
		int a = 6;
		printf("input : %d \n",a);
		int result =ft_recursive_factorial(a);
		printf("%d : is output\n",result);
	}

	{
		printf("\n----------------------ex02----------------------------\n");
		int nb = 10;
		int power = -1;
		printf("before function nb : %d power : %d \n",nb,power );
		int	result = ft_iterative_power(nb, power);
		printf("result : %d \n\n \n",result);
	}


	{
		printf("\n----------------------ex03----------------------------\n");
		int nb = -10;
		int power = -1;
		printf("before function nb : %d power : %d \n",nb,power );
		int	result = ft_iterative_power(nb, power);
		printf("result : %d \n\n \n",result);

	}

	{
		printf("\n----------------------ex04----------------------------\n");
		int input = 5;
		int result = ft_fibonacci(input);//0 1 1 2 3 5
		printf("input : %d\nresult : %d\n\n",input , result);
	}

	{
		printf("\n----------------------ex05----------------------------\n");
		int	input = 49;
		int result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
	}

	{
		printf("\n----------------------ex06----------------------------\n");
		int	input;

		input = 3;
		printf("input :: %d\n\n\n\n",input);
		int result = ft_is_prime(input);
		printf("result :: %d\n\n\n\n", result);
	}

	{
		printf("\n----------------------ex07----------------------------\n");
		int	input = 5861;
		int result = ft_find_next_prime(input);
		printf("result :: %d\n\n\n",result);
	}

	{
		printf("\n----------------------ex08----------------------------\n");
		int result = ft_ten_queens_puzzle();
		printf("\n\n\n\n result ::::: %d\n\n\n\n",result);
	}
	return 0;
}
