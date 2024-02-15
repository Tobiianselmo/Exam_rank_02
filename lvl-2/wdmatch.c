#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = argv[1];
        char *s2 = argv[2];
        while (s2[j])
        {
            if (s1[i] == s2[j])
                i += 1;
            j++;
        }
        if (!s1[i])
            ft_putstr(s1);
    }
    write(1, "\n", 1);
    return (0);
}