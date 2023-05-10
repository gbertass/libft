#include "libft.h"


int	main(void)
{
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@ PARTE 1:\n\n\n")

	printf("********TESTE FT_ISALPHA:\n");
    int resultado = ft_isalpha(105);
    printf("teste ft_isalpha:%d\n\n", resultado);
    int original = isalpha(105);
    printf("teste isalpha(original):  %d\n\n\n", original);


    printf("********TESTE FT_ISDIGIT:\n");
	int resultado = ft_isdigit(10);
    printf("teste ft_isdigit:%d\n", resultado);
    int original = isdigit(10);
    printf("teste isdigit(original):  %d\n\n\n", original);


	printf("********TESTE FT_ISALNUM:\n");
	int resultado = ft_isalnum(102);
    printf("teste ft_isalnum:%d\n", resultado);
    int original = isalnum(102);
    printf("teste isalnum(original):  %d\n\n\n", original);


	printf("********TESTE FT_ISASCII:\n");
	int resultado = ft_isascii(150);
    printf("teste ft_isascii:%d\n", resultado);
    int original = isascii(150);
    printf("teste isascii(original):  %d\n\n\n", original);


	printf("********TESTE FT_MEMSET:\n");
    char s[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", s);
	ft_memset(s + 13,46,13);
    printf("string pos ft_memset: %s\n", s);
    char t[] = "GeeksForGeeks is for programming geeks";
    memset(t + 13,46,13);
    printf("string pos memset (original): %s\n\n\n", t);


	printf("********TESTE FT_BZERO:\n");
    char s[] = "GeeksForGeeks is for programming geeks";
    printf("string antes: %s\n\n", s);
	ft_bzero(s+5, 4);
    printf("string pos ft_bzero: %s\n", s);
    char t[] = "GeeksForGeeks is for programming geeks";
    bzero(t+5, 4);
    printf("string pos bzero(original): %s\n\n\n", t);
	

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
	int resultado = ft_isprint(45);
    printf("teste ft_isprint:%d\n", resultado);
    int original = isprint(45);
    printf("teste isprint(original):  %d\n\n\n", original);


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
	char	src[] = "lmno";
	char	src2[] = "lmno";
	char sResult2[] = {'C', 'D', 'C', 'D', 'E', 0, '-'};
	printf("string src antes: %s\n", sResult);
	printf("string dest antes: %s\n\n", sResult);
	ft_memmove(sResult + 1, src, 2); 
	printf("string pos ft_memmove: %s\n", sResult);
	memmove(sResult2 + 1, src2, 2);
	printf("string pos memmove(original): %s\n\n\n", sResult2);

	

	printf("********TESTE FT_STRLCPY:\n");
	char dst[] = "a 42 e um teste psicologico";
	char src[] = "baleia";
    size_t  size = 10;
    printf("resultado do i:%zu\n\n\n",ft_strlcpy(dst, src, size));
	printf("resultado do i (original):%zu\n\n\n", strlcpy(dst, src, size));



	printf("********TESTE STRLCAT:\n");
	char	dest[10] = "dsto";
	char	src[10] = "src";
	int	size = 3;
	printf("Dest antes: %s\n", dest);
	printf("Return of ft_strlcat: %ld\n", ft_strlcat(dest, src, size));
	printf("Dest depois: %s\n\n", dest);
	printf("Return of strlcat(original): %ld\n", strlcat(dest, src, size));
	printf("Dest depois(original): %s\n\n\n", dest);


    printf("********TESTE FT_TOUPPER:\n\n");
    int resultado = ft_toupper(82);
    printf("teste ft_toupper:%d\n", resultado);
    int original = toupper(82);
    printf("teste toupper(original):  %d\n\n\n", original);



	printf("********TESTE FT_TOLOWER:\n\n");
    int resultado = ft_tolower(67);
    printf("teste ft_tolower:%d\n", resultado);
    int original = tolower(67);
    printf("teste tolower(original):  %d\n\n\n", original);



	printf("********FT_STRCHR:\n");
	char	str[] = "bonjour";
	int	c = '\0';
	char *resultado;
	char *original;
	resultado = ft_strchr(str, c);
	printf("string%s e c%d:\n", str, c);
	printf("resultado de str[i]: %s\n", resultado);
	original = strchr(str, c);
	printf("resultado de str[i] (original): %s\n\n\n", original);

	
	printf("********FT_STRRCHR:\n");
	char	str[] = "bonjour";
	int	c = 'o';
	char *resultado;
	char *original;
	resultado = ft_strrchr(str, c);
	printf("String: %s e C: %d\n", str, c);
	printf("resultado de str[i]: %s\n", resultado);
	original = strrchr(str, c);
	printf("resultado de str[i] (original): %s\n\n\n", original);



	printf("********TESTE FT_STRNCMP:\n");
	size_t	n;
	int	resultado;
	char	s1[] = "teste1";
	char	s2[] = "teste2";
	n = 5;
	resultado = ft_strncmp(s1, s2, n);
	printf("s1: %s\n s2: %s\n e n: %d\n\n", s1, s2, resultado);
	resultado = strncmp(s1, s2, n);
	printf("Funcao original:\n s1: %s\n s2: %s\n e n: %d\n\n\n", s1, s2, resultado);


	printf("********FT_MEMCHR:\n");
	char	str[] = "bonjour";
	int	c = '\0';
	size_t n = 2;
	char *resultado;
	char *original;
	resultado = ft_memchr(str, c, n);
	printf("string: %s e C: %d e N: %zu\n", str, c, n);
	printf("resultado de str[i]: %s\n", resultado);
	original = memchr(str, c, n);
	printf("resultado de str[i] (original): %s\n\n\n", original);



	printf("********FT_MEMCMP:\n");
	char	str1[] = "abcdef";
	char	str2[] = "abc";
	size_t n = 4;
	int	resultado;
	int	original;
	resultado = ft_memcmp(str1, str2, n);
	printf("string1:%s\nstring2:%s\nn:%zu\nresultado:%d\n", str1, str2, n, resultado);
	original = memcmp(str1, str2, n);
	printf("resultado de memcmp(original): %d\n\n\n", original);



	printf("********TESTE STRNSTR\n");
	const char	big[] = "pensar";
	const char	little[] = "ar";
	size_t len = 4;
	char *resultado;
	char *original;
	resultado = ft_strnstr(big, little, len);
	printf("resultado de &big[i]: %s\n\n\n", resultado);


    
	printf("********TESTE FT_ATOI:\n");
	char	str[] = "       -+-921bc687";
	int	result;
    int test;
	result = ft_atoi(str);
	printf("input: %s\n", str);
	printf("resultado da funcao: %i\n\n", result);
	printf("funcao original:\n");
    test = atoi(str);
    printf("input: %s\n", str);
	printf("resultado da funcao: %i\n\n\n", test);



	printf("********TESTE FT_CALLOC:\n")
	size_t nmemb = 5;
	size_t size = 4;
	int *a;
	int *b;
	a = (int *) ft_calloc(nmemb, size);
	printf("resultado ft_calloc: %d\n", a);
	b = (int *) calloc(nmemb, size);
	printf("resultado ft_calloc(original): %d\n\n\n", b);
	


	printf("********TESTE FT_STRDUP:\n");
	cnst char s[] = "Alocação dinâmica de memória";
	char *teste;
	char *teste2;
	teste = ft_strdup(s);
	printf("resultado ft_strdup:%s\n", teste); 
	teste2 = strdup(s);
	printf("resultado strdup(original):%s\n", teste2);

------------------------------------------------------------------
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@ PARTE 2:\n\n\n");

	printf("********TESTE FT_SUBSTR:\n");
	const char s[] = "abobora assada";
	size_t l = 6;
	unsigned int start = 3;
	char	*teste;
	teste = ft_substr(s, start, l);
	printf("resultado ft_substr:%s\n", teste);

	

	printf("********TESTE FT_STRJOIN:\n");
	const char s1[] = "box";
	const char s2[] = "banho";
	char *fun;
	fun = ft_strjoin(s1,s2);
	printf("resultado de ft_strjoin:%s\n\n\n", fun);



	printf("********TESTE FT_STRTRIM:\n");
	const char s1[]= "lorem ipsum dolor sit amet";
	const char set[] = "te";
	char	*result;	
	result = ft_strtrim(s1, set);
	printf("resultado ft_strtrim:%s\n\n\n", result);


	printf("********TESTE FT_SPLIT:\n");
	const char s[] = "elefante toma banho";
	char c = 'a';
	char **str = ft_split(s, c);
	int	i = 0;
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}


	printf("********TESTE FT_ITOA:\n");
	int n = -237;
	printf("Valor de n:%d\n", n);
	printf("Funcao ft_itoa:%s\n", ft_itoa(n));
	printf("\n\n\n");


	printf("********TESTE FT_STRITERI:\n");
	void convert_to_uppercase(unsigned int i, char *c)
	{
		*c = ft_toupper(*c);
	}
	int main(void)
	{
		char s[] = "hello world";
		ft_striteri(s, &convert_to_uppercase);
		printf("%s\n", s);  // imprime "HELLO WORLD"
		return 0;
		printf("\n\n\n");
	}


	printf("********TESTE FT_STRMAPI:\n");
	char touppercase(unsigned int i, char c)
	{
   	 return (char) (c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c);
	}

	int	main()
	{
	const char s[] = "hello world";
	char	*depois;
	depois = ft_strmapi(s, touppercase);
	printf("%s\n", depois);  // imprime "HELLO WORLD"
	return 0;
	printf("\n\n\n");
	}


	printf("********TESTE FT_PUTCHAR_FD:\n");
	char c = 'B';
	ft_putchar_fd(c, 1);
	printf("\n\n\n");



	printf("********TESTE FT_PUTSTR_FD:\n");
	char *s = "superMario";
	ft_putstr_fd(s, 1);
	printf("\n\n\n");


	
	printf("********TESTE FT_PUTENDL_FD:\n");
	char *s = "superMarioWorld";
	ft_putendl_fd(s, 1);

	

	printf("********TESTE FT_PUTNBR_FD:\n");
	ft_putnbr_fd(10, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	return (0);
}
--------------------------------------------------------
	BONUS

	printf("FT_LSTADD_BACK") //PRECISA SER CORRIGIDO
	s_list *next = NULL;
    s_list *new_node;

    // Adicionando três nós na lista
    for (int i = 1; i <= 3; i++)
    {
        new_node = malloc(sizeof(t_list));
        new_node->data = i;
        new_node->next = NULL;
        ft_lstadd_back(&head, new_node);
    }

    // Percorrendo a lista e imprimindo os valores dos nós
    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
