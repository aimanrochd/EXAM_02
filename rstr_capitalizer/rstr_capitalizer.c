#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t'))
        {
            write(1, str, 1);
            ++str;
        }
        while (*str && (*str != ' ' && *str != '\t'))
        {
            if (*(str + 1) == '\0' || *(str + 1) == ' ' || *(str + 1) == '\t')
            {
                if (*str >= 'a' && *str <= 'z')
                    *str -= 32;
                
            }
            else
            {
                if (*str >= 'A' && *str <= 'Z')
                    *str += 32;
            }
            write(1, str, 1);
            ++str;
        }
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 1)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            i++;
        }
    }
}