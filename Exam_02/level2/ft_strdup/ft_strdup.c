#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    while (src[len])
        len++;
    char    *str = malloc(len  +  1);
    if (!str)
        return (NULL);
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}