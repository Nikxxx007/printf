#ifndef PRINTF_PARSER_H
# define PRINTF_PARSER_H

void   parse_procent(const char *format, t_procent *pr, int *counter, va_list list);
int	    ft_atoi_int(const char *str, int *i);
void	add_values(int *value,int *i,const char *format, va_list list);

#endif //PRINTF_PARSER_H
