#include <stdio.h>
#include "./ex02/ft_ultimate_range.c"

int main()
{
    printf("-------ex02-------\n\n");
    int	*ex02_arr1;
    int	*ex02_arr2;
    int	*ex02_arr3;
	int size1 = ft_ultimate_range(&ex02_arr1, 5, 10);
    int size2 = ft_ultimate_range(&ex02_arr2, -4, 10);
    int size3 = ft_ultimate_range(&ex02_arr3, 10, 1);
    
    printf("min : 5, max : 10, size : %d\n", size1);
	for (int i = 0; i < size1 ; i++)
	{
		printf("%d ", ex02_arr1[i]);
	}
    printf("\n\n");
    printf("min : -4, max : 10, size : %d\n", size2);
	for (int i = 0; i < size2 ; i++)
	{
		printf("%d ", ex02_arr2[i]);
	}
    printf("\n\n");
    printf("min : 10, max : 1, size : %d\n", size3);
	printf("%p ", ex02_arr3);
    printf("\n\n");
    free(ex02_arr1);
    free(ex02_arr2);
    free(ex02_arr3);

}
