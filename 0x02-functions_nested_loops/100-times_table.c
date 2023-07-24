#include "main.h"

/**
 * print_times_table - A function that prints n times table
 * @n: the int times table to print
 */

void print_times_table(int n)
{
	int a = 0;
	int b = 0;

	if (n > 15 || n < 0)
	{
	return;
	}
	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	if (b == 0)
	{
	_putchar('0');
	}
	_putchar(',');
	_putchar(' ');
	_putchar(a * b + '0');
	}
	}
	if (n > 9)
	{
	putchar((a * b / 10) + '0');
	putchar((a * b % 10) + '0');
	}
	_putchar('\n');
	}
}
