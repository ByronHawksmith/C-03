char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*concat;
	unsigned int	i;

	concat = dest;
	i = 0;
	while (*concat)
		concat++;
	while (*src && i < nb)
	{
		*concat = *src;
		concat++;
		src++;
		i++;
	}
	*concat = 0;
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char a2[12] = "Hello!";
	char d2[6] = "Hello!";

	printf("Hello!Hello! : %s\n", ft_strncat(a2, d2, 3));

	char a3[13] = "üHello!";
	char b3[] = "Hello!";
	char c3[14] = "üHello!";
	char d3[] = "Second";

	printf("üHello!Hello! : %s\n", ft_strncat(a3, b3, 4));
	printf("üHello!üHello! : %s\n", ft_strncat(c3, d3, 5));
}
*/
