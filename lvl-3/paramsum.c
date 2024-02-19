#include <unistd.h>

void ft_putnbr(int n)
{
	char *base = "0123456789";
	if (n <= 9)
		write(1, &base[n], 1);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		ft_putnbr(argc - 1);
	}
	write(1, "\n", 1);
}