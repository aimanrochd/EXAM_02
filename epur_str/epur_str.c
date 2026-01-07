#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char    *str = av[1];
        while (*str)
        {
            while (*str == ' ' || *str == '\t')
                ++str;
            while (*str && (*str != ' ' && *str != '\t'))
            {
                write(1, str, 1);
                ++str;
            }
            if (*(str + 1))
                write(1, " ", 1);
            while (*str && (*str == ' ' || *str == '\t'))
                ++str;
        }
    }
    write (1, "\n", 1);
}