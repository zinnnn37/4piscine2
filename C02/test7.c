#include <stdio.h>
#include "./ex07/ft_strupcase.c"

int main()
{
    printf("ex07\n");
    char ex07_str[] = "Hello";
    printf("before str : %s\n", ex07_str);
	printf("after str : %s\n", ft_strupcase(ex07_str));
}
