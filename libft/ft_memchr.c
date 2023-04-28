/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:33:30 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/21 15:22:48 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	i = 0;
	if (str[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{	
		if (str[i] == c && i < n)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
