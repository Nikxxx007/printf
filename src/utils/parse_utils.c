#include "../../includes/ft_printf.h"

int	ft_atoi_int(const char *str)
{
    unsigned int	new;
    int				minus;

    new = 0;
    minus = 1;
    if (*str == '-')
        minus *= -1;
    if ((*str == '-') || (*str == '+'))
        str++;
    while (*str >= '0' && *str <= '9')
    {
        new = (new * 10) + (*str - '0');
        str++;
        if ((new > 2147483647 && minus == 1)
            || (new > 2147483648 && minus == -1))
        {
            if (minus == 1)
                return (-1);
            return (0);
        }
    }
    return ((int)(new * minus));
}

int		add_values(char *format, int *counter)
{

}
