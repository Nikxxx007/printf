#ifndef PRINTF_STRUCT_H
# define PRINTF_STRUCT_H

typedef struct s_procent
{
	char		status; //e-> error, o-> ok
	char		flag;
	int         width;
	int         precision;
	char		type;
	int 		start;//change this value changes till value is correct
						//maybe should be removed
	int         cur_elem; //current element of the list (values insted of *)
	                        //maybe should be removed

}				t_procent;

#endif //PRINTF_STRUCT_H
