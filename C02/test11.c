#include <stdio.h>
#include <string.h>
#include "./ex11/ft_putstr_non_printable.c"

int main()
{
	char test[20] = {200, 255};
	ft_putstr_non_printable(test);
}
