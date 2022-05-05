#include <stdio.h>
#include <string.h>
#include "./ex10/ft_strlcpy.c"

int main()
{
    printf("ex10\n");
    char ex10_src[] = "hello my name is kmj.";
	char ex10_dest[50];
    printf("src : %s, size = 5\n", ex10_src);
	printf("ft_strlcpy : %d\n", ft_strlcpy(ex10_dest, ex10_src, 5));
	printf("dest : %s\n", ex10_dest);
}
