/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:52:24 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/27 17:56:37 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		{
			str[0] = '-';
			n = n * -1;
		}
	len--;
	while (len >= 0)
	{
		if (str[0] == '-')
			return (str);
		else 
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (str);
}
int	main(void)
{
	int n = -237;
	printf("%s\n", ft_itoa(n));
	return (0);
}