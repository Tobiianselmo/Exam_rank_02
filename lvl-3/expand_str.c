#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        int check = 0;
        while (str[i] == ' ' || str[i] == '\t')
            i += 1;
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
                check = 1;
            if (str[i] != ' ' && str[i] != '\t')
            {
                if (check)
                    write(1, "   ", 3);
                check = 0;
                write(1, &str[i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}