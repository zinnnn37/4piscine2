#include <stdio.h>
#include <string.h>
#include "./ex05/ft_strlcat.c"

int	main()
{
	//ex05
	printf("ex05\n");
	char	ex05_dest1[50] = "hello my name";
	char	ex05_src1[50] = " is minjinki.";
	char	ex05_dest2[50] = "hello my name";
	char	ex05_src2[50] = " is minjinki.";
	char	ex05_dest3[50] = "hello my name";
	char	ex05_src3[50] = " is minjinki.";
	char	ex05_dest4[50] = "hello my name";
	char	ex05_src4[50] = " is minjinki.";

	printf("strlcat, n=5 : %lu\nstrlcat, n=20 : %lu\n", strlcat(ex05_dest1, ex05_src1, 5), strlcat(ex05_dest2, ex05_src2, 20));
	printf("%s\n", ex05_dest1);
	printf("%s\n\n", ex05_dest2);


	printf("ft_strlcat, n=5 : %d\nft_strlcat, n=20 : %d\n\n", ft_strlcat(ex05_dest3, ex05_src3, 5), ft_strlcat(ex05_dest4, ex05_src4, 20));
	printf("%s\n", ex05_dest3);
	printf("%s\n\n", ex05_dest4);
}

