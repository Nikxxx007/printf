#include "../../includes/ft_printf.h"

void	helper_p(long long nb, int fd)
{
    long int	digit;

    if (nb != 0)
    {
        digit = nb % 16;
        helper_p(nb / 16, fd);
        if (digit < 10)
            digit += 48;
        else
            digit += 87;
        write(fd, &digit, 1);
    }
}

void	ft_putpoint_fd(long long n, int fd, t_procent *pr)
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
        helper_p(n, fd);
    }
}

void	print_pointer(t_procent *pr, va_list list)
{
    long long value;

    value = va_arg(list, uint64_t);
    write(1, "0x", 2);
    ft_putpoint_fd(value, 1, pr);
}



