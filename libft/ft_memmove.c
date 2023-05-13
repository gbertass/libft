/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:17:22 by gbertass          #+#    #+#             */
/*   Updated: 2023/05/13 15:58:57 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

//copies n characters from str2 to str1, but for overlapping memory blocks
/* Ela recebe três parâmetros: um ponteiro para o destino (dest), um ponteiro constante para a origem (src) e um valor do tipo size_t (n) que representa o número de bytes a serem copiados.

Os ponteiros psrc e pdest são criados para armazenar as posições iniciais da origem e do destino, respectivamente.

Verifica-se se tanto o destino quanto a origem são nulos (ou seja, não apontam para nenhuma posição de memória). Se ambos forem nulos, a função retorna nulo (NULL).

Em seguida, verifica-se se o destino (pdest) está antes da origem (psrc) na memória. Se isso for verdadeiro, significa que não há sobreposição entre os blocos de memória e a cópia pode ser feita diretamente do início para o final.

Se o destino estiver antes da origem, um loop é executado enquanto n for maior que zero. Dentro do loop, cada byte de psrc é copiado para pdest, e os ponteiros psrc e pdest são incrementados para apontar para a próxima posição de memória.

Se o destino estiver depois da origem, é necessário fazer a cópia de trás para frente para evitar sobreposição indesejada de dados. Nesse caso, os ponteiros pdest e psrc são posicionados no final dos blocos de memória a serem copiados.

Em seguida, um loop é executado enquanto n for maior que zero. Dentro desse loop, cada byte de psrc é copiado para pdest, e os ponteiros pdest e psrc são decrementados para apontar para a posição anterior de memória.

Finalmente, o ponteiro para o destino (dest) é retornado como resultado da função.
while (n-- > 0): Este é um loop que continua enquanto o valor de n for maior que zero. A expressão n-- > 0 verifica se n é maior que zero e, em seguida, diminui n em 1 após cada iteração.

--pdest;: Aqui, o ponteiro pdest é decrementado para apontar para a posição anterior de memória. Isso é feito antes de copiar o valor de psrc para a posição de pdest porque queremos copiar os bytes de trás para frente.

--psrc;: Da mesma forma, o ponteiro psrc é decrementado para apontar para a posição anterior de memória correspondente à posição atual de pdest.

*pdest = *psrc;: Nesta linha, o byte apontado por psrc é copiado para a posição de memória apontada por pdest. Isso significa que o byte da origem está sendo copiado para a posição correta no destino.*/