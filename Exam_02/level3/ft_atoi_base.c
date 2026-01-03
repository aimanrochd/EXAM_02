

int     is_blank(char c)
{
    if (c <= 32)
        return 1;
    return 0;
}
int     is_valid(char c, int base)
{
    char    digit_2[17] = "0123456789ABCDEF";
    char    digit[17] = "0123456789abcdef";

    while (base--)
    {
        if (digit[base] == c || digit_2[base] == c)
            return 1;
    }
    return 0;
}

int     value_of(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while (is_blank(str[i]))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        res = res * str_base + value_of(str[i]);
        i++;
    }
    return res * sign;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
    }
    return (0);
}