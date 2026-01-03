#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];
        int i = 0;
        int j = 0;
        int len = 0;
        while (s1[len])
            len++;
        while (i < len && s2[j])
        {
            if (s1[i] == s2[j])
                i++;
            j++;
        }
        if (len == i)
            write (1, s1, len);
    }
    write(1, "\n", 1);
}