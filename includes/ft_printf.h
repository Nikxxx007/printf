#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# include "libft.h"
# include "struct.h"
# include "parser.h"
# include "utils.h"

int		ft_printf(const char *format, ...);
void	stru_values(t_procent *values);

#endif //PRINTF_FT_PRINTF_H
