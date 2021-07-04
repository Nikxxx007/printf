#include "../../includes/ft_printf.h"

void	print_minus(t_procent *pr, char value)
{
	int i;

	i = 1;
	pr->len += write(1, &value, 1);
	if (pr->width > 1)
	{
		while (i++ < pr->width)
			write(0, ' ', 1);
	}
}

void	print_zero_space(t_procent *pr, char value)
{
	if (pr->flag == '0' && pr->width > 1)
		;//TODO finished here (continue doing func in apply procent)
}

void	print_char(t_procent *pr, va_list list)
{
	char	value;

	value = va_arg(list, char);
	if (pr->flag ==  '-')
		print_minus(pr, value);
	else
		print_zero_space(pr, value);
}

