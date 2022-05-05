#include <stdio.h>
#include "./ex05/ft_split.c"


int main()
{
    printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "dupIfjt8g0KW0TgsD7QoKM1EjRdRm5JEawzqvLPfRDFkJv";
	char *ex05_str2 = "@!#";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";



	ex05_split1 = ft_split(ex05_str1, "");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	char str[1000] ="";
	char sep[100] = " ";
	char **result = ft_split(str, sep);
	for (int i = 0; result[i] != 0; i++)
		printf("%d :::::%s\n\n",i,result[i]);
	for (int j = 0; ex05_split1[j] != 0; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; ex05_split2[j] != 0; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
	free(result);
}
