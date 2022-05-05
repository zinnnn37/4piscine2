/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/30 13:54:50 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex04/ft_fibonacci.c"
int main()
{
	{
		printf("\n----------------------ex04----------------------------\n");
		int input = 5;
		int result = ft_fibonacci(input);//0 1 1 2 3 5
		printf("input : %d\nresult : %d\n\n",input , result);
	}
	return 0;
}
