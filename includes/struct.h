#ifndef PRINTF_STRUCT_H
# define PRINTF_STRUCT_H

typedef struct s_procent
{
	char		status; //e-> error, o-> ok
	char		flag;
	char		width;
	char		precision;
	char		type;
	int 		start;
}				t_procent;

#endif //PRINTF_STRUCT_H
