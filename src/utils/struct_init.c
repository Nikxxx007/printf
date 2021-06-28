#include "../../includes/ft_printf.h"

t_procent *stru_values(t_procent *values)
{
	values->status = 'o';
	values->flag = 'n';
	values->width = 'n';
	values->precision = 'n';
	values->type = 'n';
	values->start = -1;
}