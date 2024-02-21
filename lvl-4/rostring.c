#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		char *str = argv[1];
		int i = 0;
		int start;
		int end;
		int check = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		end = i - 1;
		while (str[i])
		{
			while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
				i++;
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			{
				write(1, &str[i++], 1);
			}
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				check = 1;
			if (check == 1)
			{
				write (1, " ", 1);
				check = 0;
			}
		}
		write(1, " ", 1);
		while (start <= end)
		{
			write(1, &str[start++], 1);
		}
	}
}