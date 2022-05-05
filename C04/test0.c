#include <stdio.h>
#include <string.h>
#include "ex00/ft_strlen.c"

int main(void)
{
	char str[20] = "1234567890";

	printf("str: %s\n\n", str);
	printf("strlen:    %lu\n", strlen(str));
	printf("ft_strlen: %d\n", ft_strlen(str));
}
