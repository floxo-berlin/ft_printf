#include "ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return 1;
}

int ft_print_str(const char *s)
{
    int count = 0;
    if (!s)
        s = "(null)";
    while (*s)
    {
        write(1, s++, 1);
        count++;
    }
    return count;
}

