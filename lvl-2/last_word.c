#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = ft_strlen(str) - 1;
		int end = 0;
		int len = 0;
		while (str[i])
		{
			while (str[i] == ' ')
				i--;
			end = i;
			if (str[i] >= 33 && str[i] <= 126)
			{
				len = i;
				while (str[i] != ' ')
				{
					len--;
					i--;
				}
			}
			while (len <= end)
			{
				write (1, &str[len], 1);
				len++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}