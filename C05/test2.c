/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/30 17:23:01 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex02/ft_iterative_power.c"
int main()
{

	{
		printf("\n----------------------ex02----------------------------\n");
		int nb = 0;
		int power = 0;
		printf("before function nb : %d power : %d \n",nb,power );
		int	result = ft_iterative_power(nb, power);
		printf("result : %d \n\n \n",result);
	}
	return 0;
}
