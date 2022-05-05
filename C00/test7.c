#include <stdio.h>
#include "./ex07/ft_putnbr.c"

int main()
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-85045);
	printf("\n");
	ft_putnbr(1000);
	printf("\n");
	return 0;
}
