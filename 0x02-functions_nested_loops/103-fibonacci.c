#include <stdio.h>

/**
 * main - prints the sum of even valued numbers of fib num less 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned long f1 = 1, f2 = 2, sum = 0, sum1;

	for (c = 0; c <= 33; c++)
	{
	if (f1 < 4000000 && (f1 % 2) == 0)
	{
	sum += f1;
	}
	sum1 = f1 + f2;
	f1 = f2;
	f2 = sum1;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
