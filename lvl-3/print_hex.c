#include <unistd.h>

int	ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void print_hex(int num)
{
	char *base = "0123456789abcdef";
	if (num <= 16)
		write(1, &base[num], 1);
	else
	{
		print_hex(num / 16);
		print_hex(num % 16);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		if (num >= 0)
			print_hex(num);
	}
	write(1, "\n", 1);
}