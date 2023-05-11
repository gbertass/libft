/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:41:18 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/11 18:55:42 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (lst != NULL)
	{
		aux = *lst;
		while (*lst != NULL)
		{
			*lst = aux->next;
			ft_lstdelone(aux, del);
			aux = *lst;
		}
		*lst = NULL;
	}
}
