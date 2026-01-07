#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        int len = 0;
        int length = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        while (s1[length])
            length++;
        while (s1[i])
        {
            while (s2[j])
            {
                if (s1[i] == s2[j])
                {
                    len++;
                    i++;
                }
                j++;
            }
            i++;
        }
        if (len == length)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}