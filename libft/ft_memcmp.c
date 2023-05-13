/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:23:33 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/28 18:43:16 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str2 = s2;
	str1 = s1;
	i = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}

//compares the first n bytes of memory area str1 and memory area str2.
// retorno?
