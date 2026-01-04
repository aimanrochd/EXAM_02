#include <unistd.h>

int     ft_atoi(char    *str)
{
    int res = 0;
    while (*str >= '0' && *str <= '9')
    {
        res *= 10;
        res += (*str - '0');
        ++str;
    }
    return (res);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int     is_prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int add_prime_sum(int n)
{
    int sum = 0;
    int i = 2;
    while (i <= n)
    {
        if (is_prime(i) == 1)
            sum += i;
        i++;
    }
    return sum;
}

int main(int ac, char **av)
{
    int n;
    if (ac == 2 && (n = add_prime_sum(ft_atoi(av[1]))))
        ft_putnbr(n);
    else
        ft_putnbr(0);
    write(1, "\n", 1);
}
