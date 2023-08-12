#include <stdio.h>

/**
 * main - prints even valued numbers of fib num less 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned int f1 = 0, f2 = 1, sum;

	for (c = 0; c < 32; c++)
	{
	sum = f1 + f2;
	if ((sum % 2) == 0)
	printf("%d", sum);
	f1 = f2;
	f2 = sum;
	}
	printf("\n");
	return (0);
}
