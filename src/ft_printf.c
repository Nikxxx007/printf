#include "../includes/ft_printf.h"


int ft_printf(const char *format, ...)
{
	va_list		list;
	t_procent	pr;
	int			i;

	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if(format[i] == '%')
		{
			stru_values(&pr);
			parse_procent(); //TODO add prototype
		}
		else
			write(1, &(format[i++]), 1);
	}

	va_end(list);
	return (i);
}