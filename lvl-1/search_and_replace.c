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
	if (argc == 4)
	{
		int i = 0;
		char *str = argv[1];
		char *c = argv[2];
		char *x = argv[3];
		if (ft_strlen(c) == 1 && ft_strlen(x) == 1)
		{
			while (str[i])
			{
				if(str[i] == c[0])
					str[i] = x[0];
				write(1,&str[i],1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}