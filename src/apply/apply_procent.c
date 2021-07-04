#include "../../includes/ft_printf.h"

void	apply_procent(const char *format, t_procent *pr, int *counter, va_list list)
{
	if (pr->type == 'c')
		print_char();
	else if (pr->type == 's')
		print_string();
	else if (pr->type == 'c')
		print_char();
	else if (pr->type == 'p')
		print_void();
	else if (pr->type == 'i' || pr->type == 'd')
		print_decimal();
	else if (pr->type == 'u')
		print_decimal();
	else if (pr->type == 'x' || pr->type == 'X')
		print_hex();
	else if (pr->type == '%')
		print_();
}
