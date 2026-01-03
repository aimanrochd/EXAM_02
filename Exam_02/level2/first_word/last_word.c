#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i] != '\0')
            i++;
        i--;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')) 
            i--;
        i++;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

// #include <unistd.h>

// int main (int ac, char **a)
// {
// 	if (ac == 2)
// 	{
// 		int i = 0;

// 		// getting to the end of the string
// 		while (a[1][i])
// 			i++;
// 		i--;
// 		// looping over the whole string backwards
// 		// until we found a space
// 		while (a[1][i] > 32)
// 			i--;
// 		i++;
// 		// getting back to the end and writing the last word to
// 		// the screen
// 		while (a[1][i])
// 		{
// 			write(1, &a[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write (1, "\n", 1);
// }