#include "../../includes/ft_printf.h"

void	print_int(t_procent *pr, va_list list)
{
    int value;

    value = va_arg(list, int);
    ft_putnbr_fd(value, 1);
}

