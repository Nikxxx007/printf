#include "printf.h"

t_procent *struct_init()
{
	t_procent *values;

	values->flag = 'n';
	values->width = 'n';
	values->precision = 'n';
	values->type = 'n';
	values->len = 0;
}