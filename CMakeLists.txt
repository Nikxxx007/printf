cmake_minimum_required(VERSION 3.19)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(libft)

add_executable(printf   src/apply/apply_procent.c
                        src/parser/parse_procent.c
                        src/print/print_char.c
                        src/utils/parse_utils.c
                        src/utils/struct_init.c
                        src/ft_printf.c
                        main.c src/print/print_string.c 
			src/print/print_int.c 
			src/print/print_unsigned.c 
			src/utils/ft_putnbr_long_fd.c 
			src/print/print_hex.c 
			src/print/print_pointer.c)

target_link_libraries(printf libft)