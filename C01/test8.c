#include <stdio.h>
#include "./ex08/ft_sort_int_tab.c"

int main()
{
	//ex08
	int ex08_arr[] = {1, 15, 75, 99, 195, 2, 5, 33, 18, 30, 39};
	int ex08_i;
	
	printf("ex08\n");
	printf("before sort : ");
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break;
		printf(", ");
	}
	printf("\n");
	printf("after sort : ");
	ft_sort_int_tab(ex08_arr, 11);
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break ;
		printf(", ");
	}
	printf("\n");
}
