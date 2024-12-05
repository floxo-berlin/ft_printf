#include "ft_printf.h"

void ft_print_unsigned(unsigned int n)
{
    if (n >= 10)
        ft_print_unsigned(n / 10);
    ft_print_char((n % 10) + '0');
}
