#ifndef PARSER_H
# define PARSER_H

void	parse_procent(const char *format,
			t_procent *pr, size_t *counter, va_list list);
void	apply_procent(t_procent *pr, va_list list);
void	print_char(t_procent *pr, va_list list);
void	print_string(t_procent *pr, va_list list);
void	print_unsigned(t_procent *pr, va_list list);
void	print_hex(t_procent *pr, va_list list);
void	print_pointer(t_procent *pr, va_list list);

#endif //PRINTF_PARSER_H
