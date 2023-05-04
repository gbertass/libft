/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:17:22 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/20 16:54:52 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char		*pdest;

	psrc = src;
	pdest = dest;
	if (!dest && !src)
		return (NULL);
	if (pdest < psrc)
	{
		while (n-- > 0)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest = pdest + n;
		psrc = psrc + n;
		while (n-- > 0)
		{
			--pdest;
			--psrc;
			*pdest = *psrc;
		}
	}
	return (dest);
}
