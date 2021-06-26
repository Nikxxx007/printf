#include "../include/printf.h"

int ft_printf(const char *format, ...)
{
	va_list		list;
	t_procent	*pr;
	int			i;

	i = 0;
	struct_init();
	va_start(list, format);
	while (format)
	{
		if(format[i] == '%')
		{

		}
		else
		{
			write(1, &(format[i]), 1);
			pr->len++;
		}
	}

	va_end(list);
	return (pr->len);
}