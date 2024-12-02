/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:19:32 by fporzig           #+#    #+#             */
/*   Updated: 2024/11/27 14:56:58 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
int main(void)
{
    char *strings[] = {"Hello", "world", "from", "linked", "list"};
    // Create a new list node with the array of strings
    t_list *node = ft_lstnew(strings);
    // Check if node was created successfully
    if (!node)
    {
        printf("Failed to create the node.\n");
        return 1;
    }
    // Retrieve and print the content
    char **retrieved_strings = (char **)(node->content);
    for (int i = 0; i < 5; i++) {
        printf("%s\n", retrieved_strings[i]);
    }
    // Free the allocated memory
    // ft_lstdelone(node, free);
    return 0;
}
*/
