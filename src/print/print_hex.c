#include "../../includes/ft_printf.h"

void	helper_h(long long nb, int fd, t_procent *pr)
{
    long int	digit;

    if (nb != 0)
    {
        digit = nb % 16;
        helper_h(nb / 16, fd, pr);
        if (pr->type == 'x')
        {
            if (digit < 10)
                digit += 48;
            else
                digit += 87;
        }
        if (pr->type == 'X')
        {
            if (digit < 10)
                digit += 48;
            else
                digit += 55;
        }
        write(fd, &digit, 1);
    }
}

void	ft_puthex_fd(long long n, int fd, t_procent *pr)
{
    if (n == 0)
        write(fd, "0", 1);
    else
    {
        if (n < 0)
        {
            write(fd, "-", 1);
            n *= -1;
        }
        helper_h(n, fd, pr);
    }
}

void	print_hex(t_procent *pr, va_list list)
{
    long long value;

    value = va_arg(list, uint32_t);
    ft_puthex_fd(value, 1, pr);
}
