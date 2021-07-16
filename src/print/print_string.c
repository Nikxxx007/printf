#include "../../includes/ft_printf.h"

void	print_string(t_procent *pr, va_list list)
{
	char	*value;

	value = va_arg(list, char *);
	if (value == NULL)
		pr->len += write(1, "(null)", 6);
    else
    	ft_putstr_fd(value, 1, pr);
}
