#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		int i = 0;
		int j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				i++;
			j++;
		}
		if (!s1[i])
			return (1);
		else
			return (0);
	}
	write(1, "\n", 1);
}