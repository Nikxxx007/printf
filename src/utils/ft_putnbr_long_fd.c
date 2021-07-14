#include "../../includes/ft_printf.h"

void helper_l(long long nb, int fd, t_procent *pr)
{
    long int	digit;

    if (nb != 0)
    {
        digit = (nb % 10) + '0';
        helper_l(nb / 10, fd, pr);
        pr->len += write(fd, &digit, 1);
    }
}

void ft_putnbr_long_fd(long long n, int fd, t_procent *pr)
{
    if (n == 0)
        pr->len += write(fd, "0", 1);
    if (n == -2147483648)
        pr->len += write(fd, "-2147483648", 11);
    else
    {
        if (n < 0)
        {
            pr->len += write(fd, "-", 1);
            n *= -1;
        }
        helper_l(n, fd, pr);
    }
}