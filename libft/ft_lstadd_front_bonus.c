/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:01:11 by fporzig           #+#    #+#             */
/*   Updated: 2024/11/27 16:36:44 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
void test_ft_lstadd_front()
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("First Node");
    t_list *node2 = ft_lstnew("Second Node");

    ft_lstadd_front(&head, node1);
    printf("Head content after first add: %s\n", (char *)head->content);

    ft_lstadd_front(&head, node2);
    printf("Head content after second add: %s\n", (char *)head->content);

    // Printing the whole list to verify the order
    t_list *current = head;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }
}
int main()
{
    test_ft_lstadd_front();
    return 0;
}
*/
