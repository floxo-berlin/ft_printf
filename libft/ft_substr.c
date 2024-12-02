/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:08:42 by fporzig           #+#    #+#             */
/*   Updated: 2024/11/12 12:22:40 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	i;
	unsigned int	max_len;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	max_len = (unsigned int)ft_strlen(s) - start;
	if (len > max_len)
		len = max_len;
	copy = (char *)ft_calloc(len + 1, sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
