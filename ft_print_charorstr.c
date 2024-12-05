#include "ft_printf.h"

void ft_print_char(int c)
{
    write(1, &c, 1);
}

void ft_print_str(const char *s)
{
    if (!s)
        s = "(null)";
    while (*s)
        write(1, s++, 1);
}
