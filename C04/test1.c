#include <stdio.h>
#include "ex01/ft_putstr.c"

int main(void)
{
	char str[20] = "hihihi";
	printf("str: %s\n\n", str);

	printf("ft_putstr: ");
	fflush(stdout);
	ft_putstr(str);
}
