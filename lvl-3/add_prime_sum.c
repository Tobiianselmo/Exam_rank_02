#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void ft_putnbr(int nbr)
{
	char *base = "0123456789";
	if (nbr <= 9)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int is_prime(int num)
{
	int i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int num = ft_atoi(str);
		int i = 2;
		int result = 0;
		if (num > 0)
		{
			while (num >= i)
			{
				if (is_prime(num) == 1)
					result = result + num;
				num--;
			}
		}
		ft_putnbr(result);
	}
	write (1, "\n", 1);
}