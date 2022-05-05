#include <stdio.h>
#include <string.h>
#include "./ex02/ft_str_is_alpha.c"

int main()
{
    //ex02
    char ex02_arr1[] = "asdg";
	char ex02_arr2[] = "adtsljlADFJSzcgk";
	char ex02_arr3[] = "51ADSF235 ;adf4";
	char ex02_arr4[] = "";
	printf("arr1 : %s\n%d\n", ex02_arr1, ft_str_is_alpha(ex02_arr1));
    printf("arr2 : %s\n%d\n", ex02_arr2, ft_str_is_alpha(ex02_arr2));
    printf("arr3 : %s\n%d\n", ex02_arr3, ft_str_is_alpha(ex02_arr3));
    printf("arr4 : %s\n%d\n", ex02_arr4, ft_str_is_alpha(ex02_arr4));
}
