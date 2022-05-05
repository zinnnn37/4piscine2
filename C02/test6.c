#include <stdio.h>
#include <string.h>
#include "./ex06/ft_str_is_printable.c"

int main()
{
    //ex06
    printf("ex06\n");
    char ex06_arr1[] = "asdgadsikijEAR1 1%$#^*d";
	char ex06_arr2[] = "ASNsd\b\a";
	char ex06_arr3[] = "s\b";
	char ex06_arr4[] = "";
	
	printf("arr1 : %s\n%d\n", ex06_arr1, ft_str_is_printable(ex06_arr1));
    printf("arr2 : %s\n%d(contains \\b, \\a)\n", ex06_arr2, ft_str_is_printable(ex06_arr2));
    printf("arr3 : %s\n%d(contains \\b)\n", ex06_arr3, ft_str_is_printable(ex06_arr3));
    printf("arr4 : %s\n%d\n", ex06_arr4, ft_str_is_printable(ex06_arr4));
}
