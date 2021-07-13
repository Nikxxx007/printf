#include "../includes/ft_printf.h"


int ft_printf(const char *format, ...)
{
	va_list		list;
	t_procent	pr;
	int			i;

	i = 0;
	va_start(list, format);
	while (i < ft_strlen(format))
	{
		if(format[i] == '%')
		{
		    i++;
			stru_values(&pr);
			parse_procent(format, &pr, &i, list);//TODO fix %type%typre (no space)
            apply_procent(format, &pr, &i, list);
		}
		else
			pr.len += write(1, &(format[i++]), 1);
	}

	va_end(list);
	return (pr.len); //TODO check if returned number is correct
}
