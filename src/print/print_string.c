#include "../../includes/ft_printf.h"

void	print_string(t_procent *pr, va_list list)
{
    char	*value;

    value = va_arg(list, char *);
    ft_putstr_fd(value, 1, pr);
}


