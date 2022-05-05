/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/30 16:17:40 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex03/ft_recursive_power.c"
int main()
{
	{
		printf("\n----------------------ex03----------------------------\n");
		int nb = -9;
		int power = 2;
		printf("before function nb : %d power : %d \n",nb,power );
		int	result = ft_recursive_power(nb, power);
		printf("result : %d \n\n \n",result);

	}
}
