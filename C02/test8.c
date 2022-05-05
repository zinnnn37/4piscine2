#include <stdio.h>
#include <string.h>
#include "./ex08/ft_strlowcase.c"

int main()
{
    //ex08
    printf("ex08\n");
    char ex08_str[] = "Hello This is MJK.";
    printf("before str : %s\n", ex08_str);
	printf("after str : %s\n", ft_strlowcase(ex08_str));
}
