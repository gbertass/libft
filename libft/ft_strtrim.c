/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:08:33 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 16:18:59 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Return a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
set: The reference set of characters to trim.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *) malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	const char s1[]= "lorem ipsum dolor sit amet";
	const char set[] = "te";
	char	*result;	
	result = ft_strtrim(s1, set);
	printf("resultado ft_strtrim:%s\n\n\n", result);

}*/