/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:28:49 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/20 17:27:18 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{	
		x = 0;
		while (big[i + x] != '\0'
			&& big[i + x] == little[x] && i + x < len)
		{
			if (little[x + 1] == '\0')
			{
				return ((char *)big + i);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}
