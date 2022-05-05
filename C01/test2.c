#include <stdio.h>
#include "./ex02/ft_swap.c"

int main()
{
	//ex02
	int ex02_num1 = 10, ex02_num2 = 20;
	printf("before swap\nnum1 = %d, num2 = %d\n", ex02_num1, ex02_num2);
	ft_swap(&ex02_num1, &ex02_num2);
	printf("after swap\nnum1 = %d, num2 = %d\n", ex02_num1, ex02_num2);
}
