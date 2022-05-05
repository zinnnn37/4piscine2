#include <stdio.h>
#include <string.h>
#include "./ex01/ft_strncpy.c"

int main()
{
    char ex01_src[] = "Hello world!";
	char ex01_dest[20] = "abcdefghijk";
	char dest[20] = "abcdefghijk";
	printf("src : %s\nn = 5\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 5);
	printf("ft_strncpy : %s\n", ex01_dest);
	printf("strncpy : %s\n", strncpy(dest, ex01_src, 5));
}
