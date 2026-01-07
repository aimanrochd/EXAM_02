#include <unistd.h>

int main(int ac, char **av)
{
    if (ac < 2)
        return(write(1, "\n", 1), 1);
    
    int i = 0;
    while (av[1][i])
        i++;
    while (i > 0)
    {
        while (i > 0 && av[1][i - 1] == ' ')
            i--;
        int end = i;
        while (i > 0 && av[1][i - 1] != ' ')
            i--;
        int start = i;
        while (start < end)
            write(1, &av[1][start++], 1);
        if (i > 0)
            write(1, " ", 1);
    }
    
    write(1, "\n", 1);
}