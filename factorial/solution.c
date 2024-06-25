#include <stdio.h>

// solve by recursion  cause run time Error
// long factorial(long n)
// {
// 	if (n == 0)
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		return (n * factorial(n - 1));
// 	}
// }

int main()
{
	long n;
	scanf("%ld", &n);
	if (n == 1)
		printf("NO");
	else
		printf("YES");

	return (0);
}

