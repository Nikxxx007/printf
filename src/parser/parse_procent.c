#include "../../includes/ft_printf.h"

int 	isValide(char a)
{
	if ((a == 'c') || (a == 's') || (a == 'p') || (a == 'd')
		|| (a == 'i') || (a == 'u') || (a == 'x')
		|| (a == 'X') || (a == '%') || (a == '-')
		|| (a == '.') || (a == '*') || (a == '%')
		|| ((a >= '0') && (a <= '9')))
		return (1);
	else
		return (0);
}

void	parse_procent(const char *format, t_procent *pr,
					  size_t *counter, va_list list)
{
	int	i;

	i = *counter;
	while (isValide(format[i]) && pr->type == 'n')
	{
		if (format[i] == '0' || format[i] == '-')
			pr->flag = format[i++];
		if ((format[i] >= '0' && format[i] <= '9') || format[i] == '*')
			add_values(&pr->width, &i, format, list);
		if (format[i] == '.')
			add_values(&pr->precision, &i, format, list);
		i++;
		*counter = i;
		pr->type = format[*counter - 1];
	}
}
