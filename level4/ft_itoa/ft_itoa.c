#include <stdlib.h>

int     get_len(int n)
{
    int len=  0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return len;
}

char    *ft_itoa(int n)
{
    int len = get_len(n);
    long nb = n;
    int i = 0;
    char    *str = malloc(len + 1);
    str[len] = '\0';
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    else if (nb == 0)
        str[0] = '0';
    while (nb != 0)
    {
        --len;
        str[len] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}