#include <stdio.h>
#include "./ex03/ft_strjoin.c"


int main()
{
    printf("-------ex03-------\n");
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];

	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "mjk";
	ex03_arr1 = ft_strjoin(5, ex03_str, " ");
    ex03_arr2 = ft_strjoin(5, ex03_str, "");
    ex03_arr3 = ft_strjoin(5, ex03_str, "1234");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}
