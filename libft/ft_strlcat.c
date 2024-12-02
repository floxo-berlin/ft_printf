/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:33:06 by fporzig           #+#    #+#             */
/*   Updated: 2024/11/12 15:33:07 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (s_len);
	}
	if (size <= d_len)
	{
		return (size + s_len);
	}
	while (src[i] && d_len + 1 < size)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (d_len + ft_strlen(&src[i]));
}
