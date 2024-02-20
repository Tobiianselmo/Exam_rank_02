#include <unistd.h>
 
/* int count_words(char *str)
{
    int count = 0;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            count++;
            while (str[i] && str[i] != ' ')
                i++;
        }
        while (str[i] == ' ' && str[i])
            i++;
    }
    return (count);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        int words = count_words(str);
        int count = 0;
        while (str[i] == ' ')
            i++;
        while (str[i])
        {
            if (str[i] >= 33 && str[i] <= 126)
            {
                count++;
                while (str[i] >= 33 && str[i] <= 126)
                    write(1, &str[i++], 1);
            }
            else if (str[i] == ' ' && count < words)
            {
                while (str[i] == ' ' && count < words)
                {
                    write(1, " ", 1);
                    while (str[i] == ' ')
                        i++;
                }
            }
            else 
                i++;
        } 
    }
    write(1, "\n", 1);
    return (0);
} */

/* int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int aux;
        char *str = argv[1];
        while (str[i] == 32 || str[i] == '\t')
            i++;
        while (str[i])
        {
            if (str[i] == 32 || str[i] == '\t')
                aux = 1;
            if (!(str[i] == 32 || str[i] == '\t'))
            {
                if (aux != 0)
                    write(1, " ", 1);
                aux = 0;
                write(1, &str[i], 1);
            }
            i += 1;
        }
    }
    write(1, "\n", 1);
    return (0);
} */


int main(int argc, char const *argv[])
{
    int i;
    int flg;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i += 1;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flg = 1;
            if (!(argv[1][i] == ' ' && argv[1][i] == '\t'))
            {
                if (flg)
                    write(1, " ", 1);
                flg = 0;
                write(1, &argv[1][i], 1);
            }
            i += 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}