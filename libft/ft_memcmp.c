/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:23:33 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/28 15:52:31 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	int				answer;
	size_t			tam;
	
	tam = ft_strlen(s1);
	str2 = (unsigned char *) s2;
	str1 = (unsigned char *) s1;
	i = 0;
	if (str1[i] == '\0' || tam < n)
		return (-1);
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i] && i < n - 1)
		i++;
	answer = str1[i] - str2[i];
	if (answer < 0)
		return (-1);
	else if (answer > 0)
		return (1);
	else
		return (0);
}

int main()
{
	char	str1[] = "abc";
	char	str2[] = "abc";
	size_t n = 7;
	int	resultado;
	int	original;
	resultado = ft_memcmp(str1, str2, n);
	printf("string1: %s\nstriresultado strdup(original):%sng2: %s\n e N: %zu\n", str1, str2, n);
	printf("resultado de str[i]: %d\n", resultado);
	/*original = memcmp(str1, str2, n);
	printf("resultado de str[i] (original): %d\n\n\n", original);*/
}