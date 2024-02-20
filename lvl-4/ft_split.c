#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;
    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char **ft_split(char *str)
{
    int words = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			words++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
    char **matrix = (char **)malloc(sizeof(char *) * (words + 1));
    if (!matrix)
        return (NULL);
    i = 0;
    while (str[i])
    {
        while (str[i] && str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
            i++;
        j = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if (j < i)
        {
            matrix[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(matrix[k++], &str[j], i - j);
        }
    }
    matrix[k] = NULL;
    return (matrix);
}