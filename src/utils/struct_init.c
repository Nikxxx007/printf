#include "../../includes/ft_printf.h"

void	stru_values(t_procent *values)
{
	values->status = 'o';
	values->flag = 'n';
	values->width = 'n';
	values->precision = 'n';
	values->type = 'n';
	values->start = -1;
	values->cur_elem = 1; //first
}
