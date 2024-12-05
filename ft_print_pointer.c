/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:36:27 by fporzig           #+#    #+#             */
/*   Updated: 2024/12/05 21:36:28 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptrbase(unsigned long num, char *base, int *len)
{
	if (num > 15)
		ptrbase((num / 16), base, len);
	*len += 1;
	return (write(1, &base[num % 16], 1));
}

int	ft_print_ptr(void *ptr)
{
	int				len;
	unsigned long	i;

	len = 0;
	if (ptr == NULL)
	{
		len += 5;
		write(1, "(nil)", 5);
	}
	else
	{
		i = (unsigned long)ptr;
		write(1, "0x", 2);
		len += 2;
		ptrbase(i, "0123456789abcdef", &len);
	}
	return (len);
}
