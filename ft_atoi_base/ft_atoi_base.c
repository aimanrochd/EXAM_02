int ft_atoi_base(const char *str, int base)
{
    int result = 0;
    int sign = 1;
    int value;

    if (base < 2 || base > 16)
        return 0;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            value = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            value = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            value = *str - 'A' + 10;
        else
            break;

        if (value >= base)
            break;

        result = result * base + value;
        str++;
    }

    return (result * sign);
}
