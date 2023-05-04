/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:41:40 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/04 11:52:19 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*begin;
	unsigned char	*end;

	i = 0;
	begin = src;
	end = dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		end[i] = begin[i];
		i++;
	}
	return (end);
}
