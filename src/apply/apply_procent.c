#include "../../includes/ft_printf.h"

void apply_procent(t_procent *pr, va_list list)
{
	if (pr->type == 'c')
        print_char(pr, list);
	else if (pr->type == 's')
		print_string(pr, list);
	else if (pr->type == 'p')
		print_pointer(pr, list);
	else if (pr->type == 'i' || pr->type == 'd')
		print_int(pr, list);
	else if (pr->type == 'u')
		print_unsigned(pr, list);
	else if (pr->type == 'x' || pr->type == 'X')
		print_hex(pr, list);
	else if (pr->type == '%')
		pr->len += write(1, "%", 1);
}
