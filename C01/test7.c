#include <stdio.h>
#include "./ex07/ft_rev_int_tab.c"

int main()
{
	int ex07_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int ex07_i;

	printf ("before rev = ");
	for (ex07_i = 0; ex07_i<9 ; ex07_i++){
	printf("%d", ex07_arr[ex07_i]);
	}
	printf("\n");
	printf("after rev = ");
	ft_rev_int_tab(ex07_arr, 9);
	for (ex07_i=0; ex07_i<9;  ex07_i++){
		printf("%d", ex07_arr[ex07_i]);
	}
	printf("\n");
}
