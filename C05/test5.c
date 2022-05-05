/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/05/01 11:11:22 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex05/ft_sqrt.c"
int main()
{
	{
		printf("\n----------------------ex05----------------------------\n");
		int	input = 2147483647;
		int result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
		input = 2147483640;
		result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
		input = 2147302921;
		result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
		input = 2147395600;
		result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
		input = 4;
		result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
		input = 1;
		result = ft_sqrt(input);
		printf("input : %d\nresult : %d \n\n\n",input, result);
	}
	return 0;
}
