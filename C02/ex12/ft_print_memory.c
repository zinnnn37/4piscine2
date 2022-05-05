/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:57:07 by minjinki          #+#    #+#             */
/*   Updated: 2022/05/04 00:36:53 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int len)
{
	write(1, &c, len);
}

void	ft_as_hexa(unsigned char c)
{

	// putchar
}

void	ft_print_addr(unsigned char *c)
{
	int	i;

	i = 0;
	while ()
	{
	}	
}

void	ft_print_char(unsigned char *c, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_print_hexa(c[i++]);
		if (i % 2 == 0)
			ft_putchar(" ", 1);
	}

	// ascii hexa code
	// print whitespace if i % 2 == 0;
	ft_putchar(" ", 1);


	// printable or .(non-printable)
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned char	*ad;

	i = 0;
	*ad = addr;
	if (size == 0)
		return ;
	while (i * 16 < size)
	{
		if (i < size)
			len = 16;
		else
			len = len % 16;
		ft_print_addr((unsigned long long)ad + i);
		ft_putchar(": ", 2);
		ft_print_char(c + i, len);
		i += 16;
	}
	return (addr);
}
