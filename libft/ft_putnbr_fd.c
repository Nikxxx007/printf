#include "libft.h"

void	helper(int nb, int fd, t_procent *pr)
{
	int	digit;

	if (nb != 0)
	{
		digit = (nb % 10) + '0';
		helper(nb / 10, fd, pr);
		pr->len += write(fd, &digit, 1);
	}
}

void	ft_putnbr_fd(int n, int fd, t_procent *pr)
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
		helper(n, fd, pr);
	}
}
