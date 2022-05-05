/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/05/01 11:17:17 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex06/ft_is_prime.c"
int main()
{
	{
		printf("\n----------------------ex06----------------------------\n");
		int	input;

		input = 2147483647;
		printf("input :: %d\n\n\n\n",input);
		int result = ft_is_prime(input);
		printf("result :: %d\n\n\n\n", result);

		input = 2147483646;
		printf("input :: %d\n\n\n\n",input);
		result = ft_is_prime(input);
		printf("result :: %d\n\n\n\n", result);

		input = 2147483630;
		printf("input :: %d\n\n\n\n",input);
		result = ft_is_prime(input);
		printf("result :: %d\n\n\n\n", result);

		input = 2147483635;
		printf("input :: %d\n\n\n\n",input);
		result = ft_is_prime(input);
		printf("result :: %d\n\n\n\n", result);
	}
	return 0;
}
