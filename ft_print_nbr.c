#include "ft_printf.h"

void ft_print_nbr(int n)
{
    char c;

    if (n == -2147483648)
        ft_print_str("-2147483648");
    else
    {
        if (n < 0)
        {
            ft_print_char('-');
            n = -n;
        }
        if (n >= 10)
            ft_print_nbr(n / 10);
        c = (n % 10) + '0';
        ft_print_char(c);
    }
}
