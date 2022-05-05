#include <stdio.h>
#include "./ex04/ft_strs_to_tab.c"
#include "./ex05/ft_show_tab.c"

int	main(int ac, char** av)
{
	//ex04, ex05
	printf("----ex04, ex05----\n\n");
	struct s_stock_str *str;
	str = ft_strs_to_tab(ac, av);
	ft_show_tab(str);
	free(str);
	return (0);
}
