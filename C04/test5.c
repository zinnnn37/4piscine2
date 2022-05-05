#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./ex05/ft_atoi_base.c"

int main()
{
	//ex05
	printf("------ ex05 ------\n\n");
	char ex05_str1[] = "adf+----2147483648";
	char ex05_str2[] = "   ---+AABCDESSEZ";
	char ex05_str3[50] = "   ++136667";
	char ex05_str4[] = "   -----+--+!!@@#..<";
	char ex05_str5[] = "  \n \tatoi12-+123base";

	printf("0(start with char not in base)\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, "0123456789"));

	printf("0(empty base)\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, ""));

	printf("0(witespace in base)\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABC DES"));

	printf("-1\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABZ"));

	printf("0(sign in base)\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "A-+"));

	printf("12347\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	printf("-1126397\n");
	printf("%d\n\n", ft_atoi_base(ex05_str4, "!@#$%^&*()~?><'."));

	printf("27\n");
	printf("%d\n\n", ft_atoi_base(ex05_str5, "atoi"));


	strcpy(ex05_str3, "   ++ 136667");
	printf("0, space after sign\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	strcpy(ex05_str3, "   + +136667");
	printf("0, space between sign\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));
	
	strcpy(ex05_str3, "   ++13 6667");
	printf("35\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));
	
	strcpy(ex05_str3, " 6  ++136667");
	printf("6\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));
	
	strcpy(ex05_str3, "   ++a136667");
	printf("0, start with char not in base\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));
	
	strcpy(ex05_str3, "   ++13a6667");
	printf("35\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	strcpy(ex05_str3, "   +a+13a6667");
	printf("0, char not in base between sign\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	strcpy(ex05_str3, "0");
	printf("2\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	strcpy(ex05_str3, "a");
	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "abcd"));
}



