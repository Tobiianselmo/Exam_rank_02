#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *str = argv[1];
		while (str[i])
			i++;
		i--;
		while (i >= 0)
			write (1, &str[i--], 1);
	}
	write(1, "\n", 1);
	return (0);
}
