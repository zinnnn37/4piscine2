/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushin <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:57 by joushin           #+#    #+#             */
/*   Updated: 2022/04/29 19:43:17 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex07/ft_find_next_prime.c"
int main()
{
	{
		printf("\n----------------------ex07----------------------------\n");
		int	input = 50125;
		int result = ft_find_next_prime(input);
		printf("result :: %d\n\n\n",result);
	}
	return 0;
}
