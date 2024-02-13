#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *dst;
	while (src[len])
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst)
	{
		while (src[i])
		{	
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
