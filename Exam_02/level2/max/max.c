
int     max(int *tab, unsigned int len)
{
    if (!*tab)
        return (0);
    int i = 0;
    int max = 0;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
#include <stdio.h>
int main()
{
    int tab[10] = {100, 2, 3, 4, 55, 6, 7, 8, 9, 10};
    int n = max(tab, 10);
    printf("%d", n);
}