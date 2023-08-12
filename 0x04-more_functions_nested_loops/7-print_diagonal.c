#include "main.h"

/**
 * print_diagonal - A fn that draws a diagonal line
 * @n: number of times
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}

	int a, b;

	for (a = 0; a < n; a++)
	{
	for (b = 0; b < n; b++)
	{
	if (b == a)
	_putchar('\\');
	else if (b < a)
	_putchar(' ');
	}
	_putchar('\n');
	}
}
