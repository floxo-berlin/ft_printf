#include "ft_printf.h"

int ft_print_nbr(int n)
{
    int count = 0;
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
    }
    if (n < 0)
    {
        ft_print_char('-');
        count++;
        n = -n;
    }
    if (n >= 10)
        count += ft_print_nbr(n / 10);
    ft_print_char((n % 10) + '0');
    return count + 1;
}
