/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:14:27 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 16:12:35 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates enough space for count objects and returns a pointer to the allocated memory.  
//The allocated memory is filled with bytes of value zero

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	tam;

	tam = nmemb * size;
	ptr = (void *) malloc (tam);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tam);
	return (ptr);
}

/*int	main()
{
	size_t nmemb = 5;
	size_t size1 = 4;
	int *a;
	int *b;
	int i = 0;
	int j = 0;
	a = (int *) ft_calloc(nmemb, size1);
	while (i < nmemb)
	{
		printf("ft_calloc em a[%d]: %d\n",i, &a[i]);
		i++;
	}
	printf("resultado ft_calloc: %d\n", a);
	b = (int *) calloc(nmemb, size1);
	while (j < nmemb)
	{
		printf("ft_calloc em a[%d]: %d\n",j, &b[j]);
		j++;
	}
	printf("resultado ft_calloc(original): %d\n\n\n", b);
}*/