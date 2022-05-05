#include <stdio.h>
#include "./ex00/ft_strdup.c"

int main()
{
    //ex00
    printf("-------ex00-------\n\n");
    char ex00_src[] = "hello my name is hunpark!";
	char *pArr = ft_strdup(ex00_src);

    printf("src : %s\n", ex00_src);
    printf("strdup : %s\n\n", pArr);
    free(pArr);
}
