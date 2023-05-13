
#include "libft/libft.h"

void convert_to_uppercase(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}

char touppercase(unsigned int i, char c)
{
	return (char) (c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c);
}

int	main()
{

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
	char s[] = "hello world";
	ft_striteri(s, &convert_to_uppercase);
	printf("%s\n", s);  // imprime "HELLO WORLD"
	return 0;
	printf("\n\n\n");


	printf("********TESTE FT_STRMAPI:\n");
	const char s[] = "hello world";
	char	*depois;
	depois = ft_strmapi(s, touppercase);
	printf("%s\n", depois);  // imprime "HELLO WORLD"
	return 0;
	printf("\n\n\n");


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