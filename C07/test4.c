#include <stdio.h>
#include "./ex04/ft_convert_base.c"
#include "./ex04/ft_convert_base2.c"


int main()
{
    printf("-------ex04-------\n\n");
	char *str;
	str = ft_convert_base("15858", "012345678", "0123456789ABCDEF");
	printf("2A9B : %s\n", str);
	free(str);
	str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", "0123456789ABCDEFGHIJ");
	printf("-ACDADBG : %s\n", str);
	free(str);
	str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
	printf("TWYO : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
	printf("null : %s\n", str);
	free(str);	
	str = ft_convert_base("15858", "01278", "0");
	printf("null : %s\n", str);
	free(str);	
	str = ft_convert_base("15858", "01-278", "019ABCDEF");
	printf("null : %s\n\n", str);
	free(str);
}
