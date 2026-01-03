#include <stdlib.h>

int     count_len(int n)
{
    int counter = 0;
    if (n <= 0)
        counter++;
    while (n != 0)
    {
        counter++;
        n /= 10;
    }
    return counter;
    
}

char	*ft_itoa(int nbr)
{
    int len = count_len(nbr);
    char    *str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr < 0)
    {
        nbr = -nbr;
        str[0] = '-';
    }
    else if (nbr == 0)
        str[0] = '0';
    while (nbr != 0)
    {
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (str);
}

