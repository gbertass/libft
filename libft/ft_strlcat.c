/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:32:07 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/20 17:58:27 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	lsrc;
	size_t	ldst;
	size_t	result;

	x = 0;
	result = 0;
	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (size > ldst)
	{
		result = lsrc + ldst;
	}
	else
		return (lsrc + size);
	while (src[x] && (ldst + 1) < size)
	{
		dst[ldst++] = src[x++];
	}
	dst[ldst] = '\0';
	return (result);
}
