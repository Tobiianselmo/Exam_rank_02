#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10;
		n = n + *str - '0';
		str++;
	}
	return (n);
}

void putnbr(int n)
{
	char *base = "0123456789";
	if (n <= 9)
		write(1, &base[n], 1);
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		char *str = argv[1];
		int nbr = ft_atoi(str);
		int i = 1;
		while (i <= 9)
		{
			putnbr(i);		
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}