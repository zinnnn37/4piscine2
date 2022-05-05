#include <stdio.h>
#include <stdlib.h>
#include "./ex04/ft_putnbr_base.c"

int main()
{
	//ex04
	printf("------ ex04 ------\n");
	printf("0\n");
	ft_putnbr_base(0, "01");
	printf("\n\n");

	printf("*///////\n");
	ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/");
	printf("\n\n");

	printf("-)()()(\n");
	ft_putnbr_base(-42, "()");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(133316, "");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(15361, "aabc!");
	printf("\n\n");

	printf("-212\n");
	ft_putnbr_base(-10, "123");
	printf("\n\n");

	printf("123456789\n");
	ft_putnbr_base(123456789, "0123456789");
	printf("\n\n");

	printf("7 9\n");
	ft_putnbr_base(789, "01234567 9");
	printf("\n\n");

	printf("a\n");
	ft_putnbr_base(0, "abc");
	printf("\n\n");
}



