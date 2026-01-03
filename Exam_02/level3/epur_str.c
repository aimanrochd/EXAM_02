#include <unistd.h>

// // int main(int ac, char **av)
// // {
// //     if (ac == 2)
// //     {
// //         int len = 0;
// //         int i = 0;
// //         char *str = av[1];
// //         while (str[len])
// //             len++;
// //         while (str[i] == ' ' || str[i] == '\t')
// //             i++;
// //         while (str[i] != ' ' && str[i] != '\t')
// //         {
// //             write (1, &str[i], 1);
// //             i++;
// //         }
// //         while (str[i])
// //         {
// //             while ((str[i] == ' ' && str[i + 1] == ' ' ) || str[i] == '\t' && str[i + 1] == '\t')
// //                 i++;
// //             if (str[i] != ' ' || str[i] != '\t')
// //                 write (1, &str[i], 1);
// //             i++;
// //         }
// //     }
// //     write(1, "\n", 1);
// // }

// int skip(char *str, int i)
// {
//     while (str[i] == ' ' || str[i] == '\t')
//         ++i;
//     return i;
// }

// int     word_len(char *str)
// {
//     int  i = 0;
//     while (str[i] && str[i] != ' ' && str[i] != '\t')
//         ++i;
//     return i;
// }

// void    epur_str(char *str)
// {
//     int i = 0;
//     int first_word = 1;
//     int word;

//     i = skip(str, i);
//     while (str[i])
//     {
//         if (!first_word)
//             write (1, " ", 1);
//         // write(1, "   ", 3); FOR EXPAND_STR
//         word = word_len(str + i);
//         write (1, str + i, word);
//         i = i + word;
//         first_word = 0;
//         i = skip(str, i);
//     }
// }
// int main(int ac, char **av)
// {
//     if (ac == 2)
//         epur_str(av[1]);
//     write (1, "\n", 1);
// }

 int    skip(char *str, int i)
 {
    while (str[i] == '\t' || str[i]== ' ')
        ++i;
    return i;
 }
int    word_len(char *str)
{
    int i = 0;
    while (str[i] != ' ' && str[i] != '\t')
        i++;
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
            write (1, " ", 1);
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
    write(1, "\n", 1);
}