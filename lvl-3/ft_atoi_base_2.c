#include <stdio.h>
int ft_atoi_base(const char *str,int str_base)
{
    int i;
    int result;
    int sig;
    sig = 1;
    result = 0;
    i = 0;
    char *str1 = (char*)str;

    if(str1[i] == '-')
        sig = -1;
    if(str1[i] == '-' || str1[i] == '+')
        i++;
    while((str1[i] != '\0' && ((str1[i] <= '9' && str1[i] >= '0') || (str1[i] >= 'a' && str1[i] <= 'f') || (str1[i] <= 'F' && str1[i] >= 'A'))))
    {
        if(str1[i] <= '9' && str1[i] >= '0' && (str1[i] - '0') >= str_base)
            break;
        if((str1[i] >= 'a' && str1[i] <= 'f' && (str1[i] - 'a' + 10) >= str_base))
            break;
        if(str1[i] <= '9' && str1[i] >= '0' && (str1[i] - '0') < str_base)
        {
            result = result * str_base + str1[i] - '0';
            i++;
        }
        if(str1[i] <= 'F' && str1[i] >= 'A')
            str1[i] = str1[i] + 32;
        if(str1[i] >= 'a' && str1[i] <= 'f' && (str1[i] - 'a' + 10) < str_base)
        {
            result = result * str_base + str1[i] - 'a' + 10;
            i++;
        }
    }
    return(sig * result);
}