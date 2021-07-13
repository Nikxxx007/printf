#include "includes/ft_printf.h"

int main()
{
	char a = '5';
	char *str = "lol kek cheburek";
    unsigned int u_i = 4294967295;
    int i = 998887711;
    int k = 4096;
    ft_printf("%c %s %i %d %u %% %x %X %p\n", a, str, i, i, u_i, k, k, &str);
    printf("%p\n", &str);
	return 0;
}
