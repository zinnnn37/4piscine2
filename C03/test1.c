#include <stdio.h>
#include <string.h>
#include "./ex01/ft_strncmp.c"

int	main()
{
	//ex01
	char ex00_s1[] = "hello world";
	char ex00_s2[] = "hello warld";
	printf("ex01\n");
	printf("s1 : %s\ns2 : %s\n", ex00_s1, ex00_s2);
	printf("strncmp, n=5 : %d\nstrncmp, n=8 : %d\n", strncmp(ex00_s1,ex00_s2, 5), strncmp(ex00_s1, ex00_s2, 8));
	printf("ft_strncmp, n=5 : %d\nft_strncmp, n=8 : %d\n", ft_strncmp(ex00_s1,ex00_s2, 5), ft_strncmp(ex00_s1, ex00_s2, 8));
}
