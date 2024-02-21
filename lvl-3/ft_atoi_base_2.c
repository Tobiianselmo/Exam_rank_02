#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int i = 0;
    int result;
    char *s1 = (char *)str;
    if (s1[i] == '-')
        sign = -1;
    if (s1[i] == '+' || s1[i] == '-')
        i++;
    while (s1[i] && (s1[i] >= '0' && s1[i] <= '9') || (s1[i] >= 'a' && s1[i] <= 'f') || (s1[i] >= 'A' && s1[i] <= 'F'))
    {
        if (s1[i] >= '0' && s1[i] <= '9' && (s1[i] - '0') >= str_base)
            break;
        if (s1[i] >= 'a' && s1[i] <= 'f' && (s1[i] - 'a' + 10) >= str_base)
            break;
        if (s1[i] >= '0' && s1[i] <= '9' && (s1[i] - '0') < str_base)
        {
            result = result * str_base + s1[i] - '0';
            i++;
        }
        if (s1[i] >= 'A' && s1[i] <= 'F')
            s1[i] = s1[i] + 32;
        if (s1[i] >= 'a' && s1[i] <= 'f' && (s1[i] - 'a' + 10) < str_base)
        {
            result = result * str_base + s1[i] - 'a' + 10;
            i++;
        }
    }
    result *= sign;
    return (result);
}
