#include "ft_printf.h"

void ft_print_unsigned(unsigned int n)
{
    char c;

    if (n >= 10)
        ft_print_unsigned(n / 10);
    c = (n % 10) + '0';
    ft_print_char(c);
}
