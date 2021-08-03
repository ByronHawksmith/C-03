char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*concat;
	unsigned int	i;

	concat = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (concat);
}

/*
#include <stdio.h>
int	main(void)
{
	char a2[] = "Hello!";
	char d2[] = "Hello!";

	printf("Hello!Hello! : %s\n", ft_strncat(a2, d2, 3));

	char a3[] = "üHello!";
	char b3[] = "Hello!";
	char c3[] = "üHello!";
	char d3[] = "Second";

	printf("üHello!Hello! : %s\n", ft_strncat(a3, b3, 4));
	printf("üHello!üHello! : %s\n", ft_strncat(c3, d3, 5));
}
*/
