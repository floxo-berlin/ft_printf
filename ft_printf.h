#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int ft_printf(const char *format, ...);
int ft_print_char(int c);
int ft_print_str(const char *s);
int ft_print_ptr(void *ptr);
int ft_print_nbr(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hexa(unsigned int n, int uppercase);

#endif
