/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:14:41 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/02 20:08:22 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{	
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	str = (char **) malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{	
		while (s[i] == c)
			i++;
		str[j] = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str == NULL)
			return (NULL);
		while (s[i] != c && s[i] != '\0')
			str[j][k++] = s[i++];
		str[j][k] = '\0';
		j++;
		k = 0;
	}
	str[j] = NULL;
	return (str);
}

/*int	main()
{
	const char s[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char c = ' ';
	char **str = ft_split(s, c);
	
	printf("conteudo de j[0]:%s\n", str[0]);
	printf("conteudo de j[1]:%s\n", str[1]);
	printf("conteudo de j[2]:%s\n", str[2]);
	printf("conteudo de j[3]:%s\n", str[3]);
	printf("conteudo de j[4]:%s\n", str[4]);
	printf("conteudo de j[5]:%s\n", str[5]);
	printf("conteudo de j[6]:%s\n", str[6]);
	printf("conteudo de j[7]:%s\n", str[7]);
	printf("conteudo de j[8]:%s\n", str[8]);
	printf("conteudo de j[9]:%s\n", str[9]);
	printf("conteudo de j[10]:%s\n", str[10]);
	printf("conteudo de j[11]:%s\n", str[11]);
}*/