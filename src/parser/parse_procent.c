#include "../../includes/ft_printf.h"

void	check_stru_type(t_procent *pr, char *format, int count)
{

}

void	status_checker(char *format, t_procent *pr, int start, va_list list)
{

}

int 	isValide(char a)
{
	if 	((a == 'c') || (a == 's') || (a == 'p') || (a == 'd') || (a == 'i') || (a == 'u') || (a == 'x')||
			(a == 'X') || (a == '%') || (a == '-') || (a == '.') || (a == '*') ||
					((a >= '0') && (a <= '9')))
		return (1);
	else
		return (0);
}

void	parse_procent(const char *format, t_procent *pr, int *counter, va_list list)
{
	int i;

	i = *counter;
	while (isValide(format[i]))
	{
		if (format[i] == '0' ||  format[i] == '-')
			pr->flag = format[i++];
		if ((format[i] >= '0' && format[i] <= '9') || format[i] == '*') //TODO change for isDigit
			add_values(&pr->width, &i, format, list);
		if (format[i] == '.')
			add_values(&pr->precision, &i, format, list);
//        if (pr->status == 'e')
//            return counter;
		i++;
	}
    *counter = i;
    pr->type = format[*counter - 1];
	//check_stru_type();
}

void 	parse_struct(t_procent *pr)
{
	//check if type is correct
}
