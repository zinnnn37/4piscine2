#include <stdio.h>
#include "./ex06/ft_strlen.c"

int main()
{
	char ex05_arr[] = "Hello 42!";
	
	printf("ex06\n");
	printf("str : %s\n", ex05_arr);
	printf("strlen : %d\n", ft_strlen(ex05_arr));
}
