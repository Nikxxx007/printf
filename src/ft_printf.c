#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t		i;
	int			ret;
	va_list		list;
	t_procent	pr;

	i = 0;
	ret = 0;
	va_start(list, format);
	while (i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			i++;
			stru_values(&pr);
			parse_procent(format, &pr, &i, list);
			apply_procent(&pr, list);
			ret += pr.len;
		}
		else
			ret += write(1, &(format[i++]), 1);
	}
	va_end(list);
	return (ret);
}
