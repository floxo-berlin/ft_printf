#include "ft_printf.h"

int print_format(const char format, va_list args)
{
    int count = 0;

    if (format == 'c')
        count = ft_print_char(va_arg(args, int));
    else if (format == 's')
        count = ft_print_str(va_arg(args, char *));
    else if (format == 'p')
        count = ft_print_ptr(va_arg(args, void *));
    else if (format == 'd' || format == 'i')
        count = ft_print_nbr(va_arg(args, int));
    else if (format == 'u')
        count = ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x')
        count = ft_print_hexa(va_arg(args, unsigned int), 0);
    else if (format == 'X')
        count = ft_print_hexa(va_arg(args, unsigned int), 1);
    else if (format == '%')
        count = ft_print_char('%');

    return count;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            count += print_format(format[i], args);
        }
        else
        {
            count += ft_print_char(format[i]);
        }
        i++;
    }
    va_end(args);
    return count;  // Return the total count of characters printed
}
