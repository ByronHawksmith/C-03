unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[7] = "Hello!\0";
	char b[13] = "abcd\0";

	printf("FT Src before : %s\n", a);
	printf("FT Dest before : %s\n", b);

	ft_strlcat(b, a, 13);

	printf("FT Src after : %s\n", a);
	printf("FT Dest after : %s\n", b);
	
	char c[7] = "Hello!\0";
	char d[13] = "abcd\0";

	printf("Src before : %s\n", c);
	printf("Dest before : %s\n", d);

	strlcat(d, c, 13);

	printf("Src after : %s\n", c);
	printf("Dest after : %s\n", d);
}
*/
