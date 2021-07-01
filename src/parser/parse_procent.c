#include "../../includes/ft_printf.h"

void	status_checker(char *format, t_procent *pr, int start, va_list list)
{

}

int     parse_procent(char *format, t_procent *pr,int *counter, va_list list)
{
	int i;

	i = *counter;
	while (format[i] != ' ' || (format[i] <= 9 && format[i] >= 13))
	{
		if (format[i] == '0' ||  format[i] == '-')
			pr->flag = format[i];
		if (ft_isdigit(format[i]) || format[i] == '*')
			add_values(&pr->width, &i, format);//TODO create add_values
		if (format[i] == '.')
			add_values(&pr->precision);
		pr->type = format[i];
	}
	if (pr->status == 'e')
        return;
}

void 	parse_struct(t_procent *pr)
{
	//check if type is correct
}
