/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/30 13:44:21 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex01/ft_recursive_factorial.c"
int main()
{

	{
		printf("\n----------------------ex01----------------------------\n");
		int a = 1;
		printf("input : %d \n",a);
		int result =ft_recursive_factorial(a);
		printf("output: %d\n",result);
	}
	return 0;
}
