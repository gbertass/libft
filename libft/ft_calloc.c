/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:14:27 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/28 15:34:16 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	tam;

	tam = nmemb * size;
	ptr = (void *) malloc (tam);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tam);
	return (ptr);
}
