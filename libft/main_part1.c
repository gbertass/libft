#include "libft/libft.h"
#include <stdio.h>
#include <ctype.h>


int	main(void)
{
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@ PARTE 1:\n\n\n");

	printf("********TESTE FT_ISALPHA:\n");
    int resultado_isalpha = ft_isalpha(105);
    printf("teste ft_isalpha:%d\n\n", resultado_isalpha);
    int original_isalpha = isalpha(105);
    printf("teste isalpha(original):  %d\n\n\n", original_isalpha);


    printf("********TESTE FT_ISDIGIT:\n");
	int resultado_isdigit = ft_isdigit(10);
    printf("teste ft_isdigit:%d\n", resultado_isdigit);
    int original_isdigit = isdigit(10);
    printf("teste isdigit(original):  %d\n\n\n", original_isdigit);


	printf("********TESTE FT_ISALNUM:\n");
	int resultado_isalnum = ft_isalnum(102);
    printf("teste ft_isalnum:%d\n", resultado_isalnum);
    int original_isalnum = isalnum(102);
    printf("teste isalnum(original):  %d\n\n\n", original_isalnum);


	printf("********TESTE FT_ISASCII:\n");
	int resultado_ascii = ft_isascii(150);
    printf("teste ft_isascii:%d\n", resultado_ascii);
    int original_ascii = isascii(150);
    printf("teste isascii(original):  %d\n\n\n", original_ascii);


	printf("********TESTE FT_MEMSET:\n");
    char s[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", s);
	ft_memset(s + 13,46,13);
    printf("string pos ft_memset: %s\n", s);
    char t[] = "GeeksForGeeks is for programming geeks";
    memset(t + 13,46,13);
    printf("string pos memset (original): %s\n\n\n", t);


	printf("********TESTE FT_BZERO:\n");
    char u[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", u);
	ft_bzero(s+5, 4);
    printf("string pos ft_bzero: %s\n", s);
    char v[] = "GeeksForGeeks is for programming geeks";
    bzero(t+5, 4);
    printf("string pos bzero(original): %s\n\n\n", v);
	

	printf("********TESTE FT_MEMCPY:\n");
    char src[] = "Geek";
	char dest[] = "Quiz";
	size_t n = 4;
    printf("string src antes: %s\n", src);
    printf("string dest antes: %s\n\n", dest);
	ft_memcpy(dest, src, n);
    printf("string pos ft_memcpy: %s\n", dest);
	memcpy(dest, src, n);
    printf("string pos memcpy(original): %s\n\n\n", dest);


	printf("********TESTE FT_ISPRINT:\n");
	int resultado_isprint = ft_isprint(45);
    printf("teste ft_isprint:%d\n", resultado_isprint);
    int original_isprint = isprint(45);
    printf("teste isprint(original):  %d\n\n\n", original_isprint);


    printf("********TESTE FT_STRLEN:\n");
	char	str[] = "pum";
	int	cont;
	int value;
	cont = ft_strlen(str);
	printf("Valor de cont/i = %u\n\n", cont);	
	value = strlen(str);
	printf("Valor de cont/i (original) = %u\n\n\n", value);


	
	printf("**TESTE FT_MEMMOVE:\n");
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

	

	printf("********TESTE FT_STRLCPY:\n");
	char dst_2[] = "a 42 e um teste psicologico";
	char src_2[] = "baleia";
    size_t  size = 10;
    printf("resultado do i:%zu\n\n\n",ft_strlcpy(dst_2, src_2, size));



	printf("********TESTE STRLCAT:\n");
	char	dest_3[10] = "dsto";
	char	src_3[10] = "src";
	int	size_2 = 3;
	printf("Dest antes: %s\n", dest_3);
	printf("Return of ft_strlcat: %ld\n", ft_strlcat(dest_3, src_3, size_2));
	printf("Dest depois: %s\n\n", dest_3);


    printf("********TESTE FT_TOUPPER:\n\n");
    int resultado_upper = ft_toupper(82);
    printf("teste ft_toupper:%d\n", resultado_isalnum);
    int original_upper = toupper(82);
    printf("teste toupper(original):  %d\n\n\n", original_upper);



	printf("********TESTE FT_TOLOWER:\n\n");
    int resultado_lower = ft_tolower(67);
    printf("teste ft_tolower:%d\n", resultado_lower);
    int original_lower = tolower(67);
    printf("teste tolower(original):  %d\n\n\n", original_lower);



	printf("********FT_STRCHR:\n");
	char	str_2[] = "bonjour";
	int	c = '\0';
	char *resultado_strchr;
	char *original_strchr;
	resultado_strchr = ft_strchr(str_2, c);
	printf("string%s e c%d:\n", str_2, c);
	printf("resultado de str[i]: %s\n", resultado_strchr);
	original_strchr = strchr(str_2, c);
	printf("resultado de str[i] (original): %s\n\n\n", original_strchr);

	
	printf("********FT_STRRCHR:\n");
	char	str_3[] = "bonjour";
	int	d = 'o';
	char *resultado_rchr;
	char *original_rchr;
	resultado_rchr = ft_strrchr(str_3, d);
	printf("String: %s e C: %d\n", str_3, d);
	printf("resultado de str[i]: %s\n", resultado_rchr);
	original_rchr = strrchr(str_3, d);
	printf("resultado de str[i] (original): %s\n\n\n", original_rchr);



	printf("********TESTE FT_STRNCMP:\n");
	size_t	g;
	int	resultado_ncmp;
	char	s1[] = "teste1";
	char	s2[] = "teste2";
	g = 5;
	resultado_ncmp = ft_strncmp(s1, s2, g);
	printf("s1: %s\n s2: %s\n e n: %d\n\n", s1, s2, resultado_ncmp);
	resultado_ncmp = strncmp(s1, s2, g);
	printf("Funcao original:\n s1: %s\n s2: %s\n e n: %d\n\n\n", s1, s2, resultado_ncmp);


	printf("********FT_MEMCHR:\n");
	char	str_4[] = "bonjour";
	int	e = '\0';
	size_t m = 2;
	char *resultado_mchr;
	char *original_mchr;
	resultado_mchr = ft_memchr(str_4, e, m);
	printf("string: %s e C: %d e N: %zu\n", str, e, m);
	printf("resultado de str[i]: %s\n", resultado_mchr);
	original_mchr = memchr(str_4, e, m);
	printf("resultado de str[i] (original): %s\n\n\n", original_mchr);



	printf("********FT_MEMCMP:\n");
	char	str_5[] = "abcdef";
	char	str_6[] = "abc";
	size_t p = 4;
	int	resultado_mcmp;
	int	original_mcmp;

	resultado_mcmp = ft_memcmp(str_5, str_6, p);
	printf("string1:%s\nstring2:%s\nn:%zu\nresultado:%d\n", str_5, str_6, p, resultado_mcmp);
	original_mcmp = memcmp(str_5, str_6, p);
	printf("resultado de memcmp(original): %d\n\n\n", original_mcmp);



	printf("********TESTE STRNSTR\n");
	const char	big[] = "pensar";
	const char	little[] = "ar";
	size_t len = 4;
	char *resultado_nstr;
	char *original_nstr;
	resultado_nstr = ft_strnstr(big, little, len);
	printf("resultado de &big[i]: %s\n\n\n", resultado_nstr);


    printf("********TESTE FT_ATOI:\n");
	char	str_7[] = "       -+-921bc687";
	int	result_1;
    int test_1;
	result_1 = ft_atoi(str_7);
	printf("input: %s\n", str_7);
	printf("resultado da funcao: %i\n\n", result_1);
	printf("funcao original:\n");
    test_1 = atoi(str_7);
    printf("input: %s\n", str_7);
	printf("resultado da funcao: %i\n\n\n", test_1);


	printf("********TESTE FT_CALLOC:\n");
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
//	printf("resultado ft_calloc: %d\n", a);
	b = (int *) calloc(nmemb, size1);
	while (j < nmemb)
	{
		printf("ft_calloc em a[%d]: %d\n",j, &b[j]);
		j++;
	}
//	printf("resultado ft_calloc(original): %d\n\n\n", b);
	printf("\n\n\n");	

	printf("********TESTE FT_STRDUP:\n");
	const char z[] = "Alocação dinâmica de memória";
	char *teste_dup;
	char *teste2_dup;
	teste_dup = ft_strdup(z);
	printf("resultado ft_strdup:%s\n", teste_dup); 
	teste2_dup = strdup(z);
	printf("resultado strdup(original):%s\n", teste2_dup);
}