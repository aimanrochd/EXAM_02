#include <unistd.h>

int scan(char *str1, char c, int n)
{
    while (n >= 0)
    {
        if (str1[n] == c)
            return 0;
        n--;
    }
    return 1;
}

void inter(char *str1, char *str2)
{
    int i = 0;
    int j;

    while (str1[i])
    {
        j = 0;
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                if (scan(str1, str2[j], i - 1))
                    write(1, &str1[i], 1);
                break;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
// #include <unistd.h>

// int	ft_putchar(char c);

// int	main(int ac, char **av)
// {
// 	int	i = 0, j;
// 	// create an array of int that will act as a lookup table
// 	// 256 is because of the ascii table, each one will
// 	// correspond to a single character
// 	int	lookup[256] = {};

// 	if (ac == 3)
// 	{
// 		// looping over the whole string
// 		while (av[1][i])
// 		{
// 			j = 0;
// 			// comparing against every character in the
// 			// second string
// 			while (av[2][j])
// 			{
// 				// checking if characters are the same
// 				// as well as checking in the lookup
// 				// table if the character not already
// 				// found
// 				if (av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
// 				{
// 					// marking the character found
// 					// in the lookup table
// 					lookup[(int)av[2][j]] = 1;
// 					// writing the character
// 					// to the screen
// 					ft_putchar(av[2][j]);
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	ft_putchar('\n');
// }

// int	ft_putchar(char c)
// {
// 	return write(1, &c, 1);
// }
