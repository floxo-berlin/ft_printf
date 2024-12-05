#include "ft_printf.h"

static void print_format(const char format, va_list args)
{
    if (format == 'c')
        ft_print_char(va_arg(args, int));
    else if (format == 's')
        ft_print_str(va_arg(args, char *));
    else if (format == 'p')
        ft_print_ptr(va_arg(args, void *));
    else if (format == 'd' || format == 'i')
        ft_print_nbr(va_arg(args, int));
    else if (format == 'u')
        ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x')
        ft_print_hexa(va_arg(args, unsigned int), 0);
    else if (format == 'X')
        ft_print_hexa(va_arg(args, unsigned int), 1);
    else if (format == '%')
        ft_print_char('%');
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            print_format(format[i], args);
        }
        else
            ft_print_char(format[i]);
        i++;
    }
    va_end(args);
    return (0);
}
