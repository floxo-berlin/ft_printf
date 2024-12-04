/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:15:41 by fporzig           #+#    #+#             */
/*   Updated: 2024/12/02 16:43:20 by fporzig          ###   ########.fr       */
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
