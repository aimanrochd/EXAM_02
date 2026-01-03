
// int is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 		return (0);
// 	while (n % 2 == 0)
// 		n /= 2;
// 	if (n == 1)
// 		return 1;
// 	else
// 		return 0;
// 	// return ((n == 1) ? 1 : 0);
// }

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			return 0;
	}
	return 1;
}

#include <stdio.h>
int main()
{
	printf("%d", is_power_of_2(8));
}