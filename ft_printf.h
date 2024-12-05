#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int ft_printf(const char *format, ...);
void ft_print_char(int c);
void ft_print_str(const char *s);
void ft_print_ptr(void *ptr);
void ft_print_nbr(int n);
void ft_print_unsigned(unsigned int n);
void ft_print_hexa(unsigned int n, int uppercase);

#endif
