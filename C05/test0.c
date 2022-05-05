/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/05/01 10:21:24 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex00/ft_iterative_factorial.c"
int main()
{

	{
		printf("\n----------------------ex00----------------------------\n");
		int a = 0;
		printf("input : %d \n",a);
		int result =ft_iterative_factorial(a);
		printf("output: %d\n",result);
	}

	return 0;
}
