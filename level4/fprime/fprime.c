#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        if (n == 1)
            printf("1");
        int i = 2;
        while (n >= i)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
}