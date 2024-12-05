#include "ft_printf.h"

static int print_format(const char format, va_list args)
{
    int count = 0;

    if (format == 'c')
    {
        char c = (char)va_arg(args, int);
        count += ft_print_char(c);
    }
    else if (format == 's')
    {
        char *str = va_arg(args, char *);
        count += ft_print_str(str);
    }
    else if (format == 'p')
    {
        void *ptr = va_arg(args, void *);
        count += ft_print_ptr(ptr);
    }
    else if (format == 'd' || format == 'i')
    {
        int num = va_arg(args, int);
        count += ft_print_nbr(num);
    }
    else if (format == 'u')
    {
        unsigned int num = va_arg(args, unsigned int);
        count += ft_print_unsigned(num);
    }
    else if (format == 'x')
    {
        unsigned int num = va_arg(args, unsigned int);
        count += ft_print_hexa(num, 0);
    }
    else if (format == 'X')
    {
        unsigned int num = va_arg(args, unsigned int);
        count += ft_print_hexa(num, 1);
    }
    else if (format == '%')
    {
        count += ft_print_char('%');
    }
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
