#include "ft_printf.h"

static void print_format(const char format, va_list args)
{
    if (format == 'c')
    {
        char c = (char)va_arg(args, int);
        ft_print_char(c);
    }
    else if (format == 's')
    {
        char *str = va_arg(args, char *);
        ft_print_str(str);
    }
    else if (format == 'p')
    {
        void *ptr = va_arg(args, void *);
        ft_print_ptr(ptr);
    }
    else if (format == 'd' || format == 'i')
    {
        int num = va_arg(args, int);
        ft_print_nbr(num);
    }
    else if (format == 'u')
    {
        unsigned int num = va_arg(args, unsigned int);
        ft_print_unsigned(num);
    }
    else if (format == 'x')
    {
        unsigned int num = va_arg(args, unsigned int);
        ft_print_hexa(num, 0);
    }
    else if (format == 'X')
    {
        unsigned int num = va_arg(args, unsigned int);
        ft_print_hexa(num, 1);
    }
    else if (format == '%')
    {
        ft_print_char('%');
    }
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
        {
            ft_print_char(format[i]);
        }
        i++;
    }
    va_end(args);
    return (0);
}

