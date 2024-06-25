#include <stdio.h>

// solve by recursion 
long factorial(long n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

int main()
{
	long n;
	scanf("%ld", &n);
	printf("%ld\n",factorial(n));
	if (factorial(n) % 2 == 0)
		printf("YES");
	else
		printf("NO");

	return (0);
}

