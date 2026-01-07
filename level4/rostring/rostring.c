#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start;
    int len;
    if (ac < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
    start = i;
    while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
        i++;
    len = i - start;
    while (av[1][i])
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        if (av[1][i])
        {
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
                i++;
            }
            write(1, " ", 1);
        }
    }
    write(1, &av[1][start], len);
    write(1, "\n", 1);
    return (0);
}
