/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:16:34 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/09 17:01:46 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct t_list
{
    int             data;
    struct t_list   *next;
}               t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

int main()
{
    t_list *head = NULL;
    t_list *new_node;

    // Adicionando três nós na lista
    for (int i = 1; i <= 3; i++)
    {
        new_node = malloc(sizeof(t_list));
        new_node->data = i;
        new_node->next = NULL;
        ft_lstadd_back(&head, new_node);
    }

    // Percorrendo a lista e imprimindo os valores dos nós
    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
