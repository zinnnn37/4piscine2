#include <stdio.h>
#include "./ex09/ft_strcapitalize.c"

int main()
{
    //ex09
    printf("ex09\n");
    char ex09_str[] = "salut, coMMent tu vas ? 42Mots quArante-dEUx; cinQUAnte+ET+uN";
    printf("before str : %s\n", ex09_str);
	printf("after str : %s\n", ft_strcapitalize(ex09_str));
}
