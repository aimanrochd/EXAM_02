#include <stdlib.h>
#include <stdio.h>

char    *ft_strncpy(char    *s1, char   *s2, int n)
{
    int i = 0;
    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char    **split;

    if (!(split = (char **)malloc(sizeof(char *) * 1024)))
        return (NULL);
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            split[k] = (char *)malloc ((i - j) + 1);
            ft_strncpy(split[k++], &str[j], i - j);
        }
    }
    split[k] = NULL;
    return split;
}
int main()
{
    char    str[] = "HELLO WORLD I AM THE KING ddd \n												kkk";
    char    **split = ft_split(str);
    int i = 0;
    while (i < 8)
    {
        printf ("%s\n", split[i]);
        i++;
    }
}
