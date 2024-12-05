/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:56:19 by fporzig           #+#    #+#             */
/*   Updated: 2024/12/05 11:56:21 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_print_arg(char type, va_list args, t_flags flag)
{
	int	count;

	count = 0;
	if (type == '%')
		count += ft_print_char('%', flags);
	else if (type == 'c')
		count += ft_print_char(va_arg(args, int), flags);
	else if (type == 's')
		count += ft_printf_str(va_arg(args, const char *), flags);
	else if (type == 'd' || type == 'i')
		count += ft_printf_int(va_arg(args, int), flags);
	else if (type == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), 0, flags);
	else if (type == 'u')
		count += ft_print_unsigned(va_args(args, unsigned int), flags);
	else if (type == 'p')
		count += ft_print_ptr((unsigned long int)va_arg(args, void *), flags);
	return (count);
}

int	ft_parse_flags(const char *str, int i, va_list_args, t_flags *flags)
{
	while (str[++i] && ft_isflag(str[i]))
	{
		if (str[i] == '-')
			*flags = ft_flag_left(*flags);
		if (str[i] == '#')
			flags->hash = 1;
		if (str[i] == ' ')
			flags->space = 1;
		if (str[i] == '+')
			flags->plus = 1;
		if (str[i] == '0' && flags->left == 0 && flags->width == 0)
			flags->zero = 1;
		if (str[i] == '.')
			i = ft_flag_precision(str, i, args, flags);
		if (str[i] == '*')
			*flags = ft_flag_width(args, *flags);
		if (ft_isdigit(str[i])
			*flags = ft_flag_digit(str[i], *flags));
		if (ft_istype(str[i]))
		{
			flags->spec = str[i];
			break ;
		}
	}
	return (i);
}

int	defined(__linux__) || defined(__gnu_linux__)

int	ft_parse(char *str, va_list args)
{
	int			i;
	int			x;
				count;
	t_flags	flags;

	i = -1;
	count = 0;
	while (str[++i])
	{
		flags = ft_flags_init();
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			x = ft_parse_flags(str, i, args, &flags);
			if (flags.spec > 0)
				i = x;
			if (str[i] != '\0' && flags.spec > 0 && ft_istype(str[i]))
				count += ft_print_c(str[i]);
			else if (str[i] != '\0')
				count += ft_print_c(str[i]);
		}
		else
			count += ft_print_c(str[i]);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int					count;
	char			*str;

	if (!format || *format == '\0')
			return (0);
	str = ft_strdup(format);
	if (!str || *str == '\0')
			return (0);
	count = 0;
	va_start(args, format);
	count = ft_parse(str, args);
	va_end(args);
	free(str);
	return (count);
}
