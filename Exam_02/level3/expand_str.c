#include <unistd.h>

int skip(char *str, int i)
{
    while (str[i] == ' ' || str[i] == '\t')
        ++i;
    return i;
}

int     word_len(char *str)
{
    int  i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
        ++i;
    return i;
}

void    epur_str(char *str)
{
    int i = 0;
    int first_word = 1;
    int word;

    i = skip(str, i);
    while (str[i])
    {
        if (!first_word)
            write (1, "   ", 3);
        // write(1, "   ", 3); FOR EXPAND_STR
        word = word_len(str + i);
        write (1, str + i, word);
        i = i + word;
        first_word = 0;
        i = skip(str, i);
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write (1, "\n", 1);
}