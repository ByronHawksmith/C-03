int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (*s1 == *s2 && i < n)
	{
		s2++;
		if (*s1 == 0)
			return (0);
		s1++;
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
#include <stdio.h>
int	main(void)
{
	char *a = "Hello!";
	char *b = "Hello2!";
	char *c = "Hello3!";
	char *d = "Hello!";

	printf("(First 4) Hello! == Hello2! : %d\n", ft_strncmp(a, b, 4));
	printf("(First 5) Hello! == Hello3! : %d\n", ft_strncmp(a, c, 5));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(a, d, 6));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(a, a, 6));
	
	char a2[] = "Hello!";
	char d2[] = "Hello!";

	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(a2, d2, 3));
	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(a2, a2, 3));

	char a3[] = "üHello!";
	char b3[] = "Hello!";
	char d3[] = "üHello!";

	printf("(First 1) üHello! == Hello! : %d\n", ft_strncmp(a3, b3, 1));
	printf("(First 1) üHello! == üHello! : %d\n", ft_strncmp(a3, d3, 1));
	printf("(First 2) üHello! == üHello! : %d\n", ft_strncmp(a3, a3, 2));
}
*/
