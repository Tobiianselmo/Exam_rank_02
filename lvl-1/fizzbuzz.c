#include <unistd.h>

void ft_write_num(int i)
{
	char *base;

	base = "0123456789";
	if (i > 9)
		ft_write_num(i / 10);
	write (1, &base[i], 1);
}

int main (void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_num(i);
		i++;
		write (1, "\n", 1);
	}
}
