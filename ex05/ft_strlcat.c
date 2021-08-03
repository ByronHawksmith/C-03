unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	offset;
	unsigned int	src_index;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	offset = dest_len;
	src_index = 0;
	while (*(src + src_index))
	{
		*(dest + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset == size - 1)
			break ;
	}
	*(dest + offset) = '\0';
	return (src_len + dest_len);
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
