#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		char *s1 = argv[1];
		char *s2 = argv[2];
		char *s3 = argv[3];
		if (s2[0] == '+')
			printf("%d",  i = atoi(s1) + atoi(s3));
		else if (s2[0] == '-')
			printf("%d",  i = atoi(s1) - atoi(s3));
		else if (s2[0] == '*')
			printf("%d",  i = atoi(s1) * atoi(s3));
		else if (s2[0] == '/')
			printf("%d",  i = atoi(s1) / atoi(s3));
		else if (s2[0] == '%')
			printf("%d",  i = atoi(s1) % atoi(s3));
	}
	printf("\n");
	return (0);
}