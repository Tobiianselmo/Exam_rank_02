#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		while (str[i])
		{
			if (str[i] == 'z' || str[i] == 'Z')
			{
				str[i] = str[i] - 25;
				write (1, &str[i], 1);
			}
			else if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			{
				str[i] = str[i] + 1;
				write (1, &str[i], 1);
			}
			else
				write (1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
