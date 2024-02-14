#include <string.h>

int ft_strchr(const char *str, int c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
		{
			return (i);
		}
		i++;
	}
	return(i);
}