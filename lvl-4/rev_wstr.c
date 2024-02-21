#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		int end;
		int start;
		int check = 0;
		while (str[i])
			i++;
		i -= 1;
		while (i >= 0)
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i--;
			end = i;
			while ((str[i] != ' ' || str[i] == '\t' || str[i] == '\n') && i >= 0)
				i--;
			start = i + 1;
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				check = 1;
			while (start <= end)
			{
				write(1, &str[start], 1);
				start++;
			}
			if (check == 1)
			{
				write(1, " ", 1);
				check = 0;
			}
		}
	}
	write(1, "\n", 1);
}