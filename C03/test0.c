#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strcmp.c"

int	main()
{
	//ex00
	printf("ex00\n");
	char ex00_s1[] = "hello world!";
	char ex00_s2[] = "hello warld!";
	printf("s1 : %s\ns2 : %s\n", ex00_s1, ex00_s2);
	printf("strcmp : %d\nft_strcmp : %d\n", strcmp(ex00_s1,ex00_s2), ft_strcmp(ex00_s1, ex00_s2));
	// s1 bigger

	char s1[] = "hello world!";
	char s2[] = "hello world!";
	printf("s1 : %s\ns2 : %s\n", s1, s2);
	printf("strcmp : %d\nft_strcmp : %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	// same
	
	char s3[] = "hell world!";
	printf("s1 : %s\ns2 : %s\n", s3, s1);
	printf("strcmp : %d\nft_strcmp : %d\n", strcmp(s3, s1), ft_strcmp(s3, s1));
	// s2 bigger
	
	printf("s1 : %s\ns2 : %s\n", "(null)", "(null)");
	printf("strcmp : %d\nft_strcmp : %d\n", strcmp("", ""), ft_strcmp("", ""));
}

