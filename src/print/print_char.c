#include "../../includes/ft_printf.h"

void	print_zero_space(t_procent *pr, char value)
{
	pr->len += write(1, &value, 1);
}

void	print_char(t_procent *pr, va_list list)
{
	char	value;

	value = va_arg(list, int);
	print_zero_space(pr, value);
}
