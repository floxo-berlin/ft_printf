/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:40:05 by fporzig           #+#    #+#             */
/*   Updated: 2024/11/11 15:44:01 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr_cmp;

	if (n == 0)
	{
		return (0);
	}
	ptr = (unsigned char *)s1;
	ptr_cmp = (unsigned char *)s2;
	while ((*ptr == *ptr_cmp) && n - 1 > 0)
	{
		ptr++;
		ptr_cmp++;
		n--;
	}
	return ((int)(*ptr - *ptr_cmp));
}
