#include <stdio.h>
#include "./ex04/ft_ultimate_div_mod.c"

int main()
{
	int ex04_num1 = 30, ex04_num2 = 4;
	printf("num1 = %d, num2 = %d\n", ex04_num1, ex04_num2);
	ft_ultimate_div_mod(&ex04_num1, &ex04_num2);
	printf("div = %d\nmod = %d\n", ex04_num1, ex04_num2);
}
