int	ft_strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return ();
	while (*s1 == *s2)
	{
		s2++;
		if (*s1 == 0)
			return (0);
		s1++;
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

	printf("Hello! == Hello2! : %d\n", ft_strcmp(a, b));
	printf("Hello! == Hello3! : %d\n", ft_strcmp(a, c));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a, d));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a, a));
	
	char a2[] = "Hello!";
	char d2[] = "Hello!";

	printf("Hello! == Hello! : %d\n", ft_strcmp(a2, d2));
	printf("Hello! == Hello! : %d\n", ft_strcmp(a2, a2));
}
*/
