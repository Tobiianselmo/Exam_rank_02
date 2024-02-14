#include <unistd.h>

int first_char(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (i);
		i++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		int i = 0;
		int j = 0;
		int check = 0;
		while (s1[i])
		{
			if (i == first_char(s1, s1[i]))
			{
				check = 0;
				j = 0;
				while (s2[j])
				{
					if (s1[i] == s2[j] && check == 0)
					{
						write(1, &s1[i], 1);
						check = 1;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}