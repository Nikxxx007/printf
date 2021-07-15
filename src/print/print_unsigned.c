#include "../../includes/ft_printf.h"

void	print_unsigned(t_procent *pr, va_list list)
{
	long long	value;

	value = va_arg(list, uint32_t);
	ft_putnbr_long_fd(value, 1, pr);
}
