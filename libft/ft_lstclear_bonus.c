/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:41:18 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/10 18:45:46 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		while (!lst)
		{
			del(*lst->content);
			free(lst);
			lst = NULL;
		}
	}
	*lst = NULL;
}