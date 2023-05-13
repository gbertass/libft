/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:17:22 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 17:46:50 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n characters from str2 to str1, but for overlapping memory blocks

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char		*pdest;

	psrc = src;
	pdest = dest;
	if (dest == NULL && src == NULL)
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

/*int main()
{
	char sResult[] = {'C', 'D', 'C', 'D', 'E', 0, '-'};
	char	src1[] = "lmno";
	char	src2[] = "lmno";
	char sResult2[] = {'C', 'D', 'C', 'D', 'E', 0, '-'};
	printf("string src antes: %s\n", sResult);
	printf("string dest antes: %s\n\n", sResult);
	ft_memmove(sResult + 1, src1, 2); 
	printf("string pos ft_memmove: %s\n", sResult);
	memmove(sResult2 + 1, src2, 2);
	printf("string pos memmove(original): %s\n\n\n", sResult2);
}*/