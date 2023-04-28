/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:46:13 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/21 14:32:15 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
	const char	*str;

	str = s;
	i = 0;
	j = 0;
	if (str[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
		i++;
	while (str[i] != s[j])
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if (c == '\0' || str[i] == c)
		return ((char *)str + i);
	return (NULL);
}
