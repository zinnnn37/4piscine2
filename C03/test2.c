#include <stdio.h>
#include <string.h>
#include "./ex02/ft_strcat.c"

int	main()
{
	//ex02
	printf("ex02\n");
	char ex02_dest1[50] = "Hi my name is ";
	char ex02_src1[50] = "kmj.";
	char ex02_dest2[50] = "Hi my name is ";
	char ex02_src2[50] = "kmj.";
	printf("dest : %s\nsrc : %s\n", ex02_dest1, ex02_src1);
	printf("strcat : %s\nft_strcat : %s\n", strcat(ex02_dest1, ex02_src1), ft_strcat(ex02_dest2, ex02_src2));
}

