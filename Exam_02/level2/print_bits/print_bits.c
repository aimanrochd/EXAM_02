#include <unistd.h>
// void	print_bits(unsigned char octet)
// {
//     for(int i = 7; i >= 0;i--)
//     {
//         if (octet & (1 << i))
//             write (1, "1", 1);
//         else
//             write(1, "0", 1);
//     }
//     // int div = 128;
//     // int num = octet;

//     // while (div)
//     // {
//     //     if (div <= num)
//     //     {
//     //         write (1, "1", 1);
//     //         num %= div;
//     //     }
//     //     else
//     //         write (1, "0", 1);
//     //     div /= 2;
//     // }
// }

// void	print_bits(unsigned char octet)
// {
//     for(int i = 7;i >= 0;i--)
//     {
//         if (octet & (1 << i))
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//     }
// }

int main()
{
    print_bits(5);
}