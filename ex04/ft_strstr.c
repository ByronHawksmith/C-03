char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == 0)
			return (str);
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char* haystack = "Hello1234";
	char* needle = "5";
	char* result = ft_strstr(haystack, needle);
	char* result2 = strstr(haystack, needle);
	printf("%s\n", result);
	printf("%s\n", result2);
}
*/
