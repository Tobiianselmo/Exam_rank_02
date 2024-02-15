#include <unistd.h>

int ft_check(int c, char *str, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int a = 0;
    if (argc == 3)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];
        while (s1[i])
            i++;
        while (s2[j])
        {
            s1[i] = s2[j];
            i++;
            j++;
        }
        i--;
        while (a <= i)
        {
            if (ft_check(s1[a], s1, a) == 1)
                write(1, &s1[a], 1);
            a++;
        }
    }
    write(1, "\n", 1);
    return (0);
}