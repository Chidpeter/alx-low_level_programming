#include "main.h"

/**
 * print_to_98 - prints all natural numbers up to 98
 * @n: initialize
 */

void print_to_98(int n)
{
	int a;
	int b;

	if (n <= 98)
	{
	for (a = n; a <= 98; a++)
	{
	if (a != 98)
	{
	_putchar(a + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	}
	else if (n == 98)
	{
	_putchar(n);
	}
	else (n >= 98)
	{
	for (b = n; b >= 98; b--)
	{
	_putchar(b - '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
}
