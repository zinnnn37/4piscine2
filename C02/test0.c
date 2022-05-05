#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strcpy.c"

int main()
{
    printf("ex00\n");
    char ex00_src[] = "hello world!";
	char ex00_dest[20];
    printf("src : %s\n", ex00_src);
	ft_strcpy(ex00_dest, ex00_src);
	printf("ft_strcpy : %s\n", ex00_dest);
}
