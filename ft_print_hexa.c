/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:48:42 by fporzig           #+#    #+#             */
/*   Updated: 2024/12/05 16:48:43 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_hexa(unsigned int n, int uppercase)
{
    char *hex;

    hex = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    if (n >= 16)
        ft_print_hexa(n / 16, uppercase);
    ft_print_char(hex[n % 16]);
}
