#include "../../includes/ft_printf.h"

int	ft_atoi_int(const char *str, int *i)
{
	unsigned int	new;
	int				minus;

	new = 0;
	minus = 1;
	if (str[*i] == '-')
		minus *= -1;
	if ((str[*i] == '-') || (str[*i] == '+'))
		(*i)++;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		new = (new * 10) + (str[*i] - '0');
		(*i)++;
		if ((new > 2147483647 && minus == 1)
			|| (new > 2147483648 && minus == -1))
		{
			if (minus == 1)
				return (-1);
			return (0);
		}
	}
	return ((int)(new * minus));
}

void	add_values(int *value, int *i, const char *format, va_list list)
{
	if (format[*i] == '.')
		(*i)++;
	if ((format[*i] >= '0' && format[*i] <= '9') || format[*i] == '*')
	{
		if (format[*i] == '*')
			*value = va_arg(list, int);
		else
			*value = ft_atoi_int(format, i);
	}
}
