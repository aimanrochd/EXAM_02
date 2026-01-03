#include <stdlib.h>

// int     *ft_range(int start, int end)
// {
//     int len = abs(end - start) + 1;
//     int     *arr = malloc(sizeof(int) * len);
//     if (!arr)
//         return NULL;
//     int i = 0;
//     if (start < end)
//     {
//         while (start <= end)
//         {
//             arr[i] = end;
//             i++;
//             end--;
//         }
//     }
//     else
//     {
    
//         while (start >= end)
//         {
//             arr[i] = end;
//             i++;
//             end++;
//         }
//     }
//     return (arr);
// }
#include <stdio.h>
int		absolute_value(int n);

int		*ft_rrange(int start, int end)
{
	int number_of_ints;
	int *array;
	int step;
	int i;

	number_of_ints = 1 + abs(end - start);
	array = malloc(sizeof(int) * number_of_ints);

	if (start > end)
		step = 1;
	else
		step = -1;

	i = 0;
	while (i < number_of_ints)
	{
		array[i] = end;
		end = end + step;
		++i;
	}
	return (array);
}
int main()
{
    int     *arr = ft_range(0, -3);

    int  i = 0;
    while (i <= 3)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}