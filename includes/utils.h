#ifndef PRINTF_UTILS_H
# define PRINTF_UTILS_H

void	ft_putnbr_long_fd(long long n, int fd);
void	add_values(int *value,int *i,const char *format, va_list list);
int	    ft_atoi_int(const char *str, int *i);
void	print_int(t_procent *pr, va_list list);

#endif //PRINTF_UTILS_H
