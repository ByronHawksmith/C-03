char	*ft_strcat(char *dest, char *src)
{
	char	*concat;

	concat = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (concat);
}

/*
#include <stdio.h>
int	main(void)
{
	char a2[] = "Hello!\0";
	char d2[] = "Hello!\0";

	printf("Hello!Hello! : %s\n", ft_strcat(a2, d2));

	char a3[] = "üHello!\0";
	char b3[] = "Hello!\0";
	char c3[] = "üHello!\0";
	char d3[] = "Second\0";

	printf("üHello!Hello! : %s\n", ft_strcat(a3, b3));
	printf("üHello!üHello! : %s\n", ft_strcat(c3, d3));
}
*/
