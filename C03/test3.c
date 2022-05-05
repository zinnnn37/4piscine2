#include <stdio.h>
#include <string.h>
#include "./ex03/ft_strncat.c"

int	main()
{
	//ex03
	printf("ex03\n");
	char ex03_dest1[50] = "Hi my name is ";
	char ex03_src1[50] = "minjinki..";
	char ex03_dest2[50] = "Hi my name is ";
	char ex03_src2[50] = "minjinki..";
	char ex03_dest3[50] = "Hi my name is ";
	char ex03_src3[50] = "minjinki..";
	char ex03_dest4[50] = "Hi my name is ";
	char ex03_src4[50] = "minjinki..";
	printf("dest : %s\nsrc : %s\n", ex03_dest1, ex03_src1);
	printf("strncat, n=0 : %s\nstrncat, n=8 : %s\n", strncat(ex03_dest1,ex03_src1, 0), strncat(ex03_dest2, ex03_src2, 8));
	printf("ft_strncat, n=0 : %s\nft_strncat, n=8 : %s\n", ft_strncat(ex03_dest3,ex03_src3, 0), ft_strncat(ex03_dest4, ex03_src4, 8));
}

