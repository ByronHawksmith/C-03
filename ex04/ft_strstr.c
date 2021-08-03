char	*ft_strstr(char *str, char *to_find)
{
	char	*s_c;
	char	*tf_c;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s_c = str;
		tf_c = to_find;
		while (*tf_c && *s_c == *tf_c)
		{
			s_c++;
			tf_c++;
		}
		if (*tf_c == 0)
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
	char* needle = "3";
	char* result = ft_strstr(haystack, needle);
	char* result2 = strstr(haystack, needle);
	printf("%s\n", result);
	printf("%s\n", result2);
}
*/
