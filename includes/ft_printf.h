#ifndef PRINTF_FT_PRINTF_H
#define PRINTF_FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# include "libft.h"
# include "struct.h"
# include "parser.h"

int	ft_printf(const char *format, ...);

t_procent 	*stru_values(t_procent *values);

#endif //PRINTF_FT_PRINTF_H
