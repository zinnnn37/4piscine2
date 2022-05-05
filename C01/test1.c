#include <stdio.h>
#include "./ex01/ft_ultimate_ft.c"

int main()
{
	//ex01
	int n = 0;
	int *n1 = &n;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;
	ft_ultimate_ft(n9);
	printf("%d\n", n);
}
