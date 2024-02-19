#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *result;
	int i = 0;
	int len = (end - start);
	if (len < 0)
	{
		len = len - 1;
		len *= -1;
	}
	else
		len += 1;
	result = (int *)malloc(sizeof(int) * len);
	while (len > i)
	{
		if (end <= start)
		{
			result[i] = start;
			start -= 1;
		}
		else
		{
			result[i] = start;
			start += 1;
		}
		i++;
	}
	return (result);
}