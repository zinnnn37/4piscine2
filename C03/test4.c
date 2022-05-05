#include <stdio.h>
#include <string.h>
#include "./ex04/ft_strstr.c"

int	main()
{
	//ex04
	printf("ex04\n");
	char str[] = "hello world!";

	printf("str : %s\nto_find : llo worl\nstrstr : %s\n\n", str, strstr(str, "llo worl"));
	printf("str : %s\nto_find : lao worl\nstrstr : %s\n\n", str, strstr(str, "lao worl"));	
	printf("str : %s\nto_find : (NULL)\nstrstr : %s\n\n\n", str, strstr(str, ""));
	printf("str : %s\nto_find : llo worl\nft_strstr : %s\n\n", str, ft_strstr(str, "llo worl"));
	printf("str : %s\nto_find : lao worl\nft_strstr : %s\n\n", str, ft_strstr(str, "lao worl"));
	printf("str : %s\nto_find : (NULL)\nft_strstr : %s\n\n", str, ft_strstr(str, ""));
}
