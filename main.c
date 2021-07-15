#include "includes/ft_printf.h"

int main()
{
    char a = '1';
	char *str = NULL;
    unsigned int u_i = 4294967295;
    int i = -2147483648;
    int k = 15;
//    int len = ft_printf("%c %s %p %d %i %u %x %X %%\n", a, str, &str, i, i, u_i, k, k);
    int len = ft_printf("%s %c\n", str, a);
    len = printf("%s\n", str);
    printf("%d\n", len); // if str == NULL
	return 0;
}
