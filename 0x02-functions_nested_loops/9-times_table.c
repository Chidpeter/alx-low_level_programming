#include "main.h"

/**
 * times_table - A function that prints times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	c = b * a;
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	if (b == 0)
	{
	_putchar(c + '0');
	}
	if (c < 10 && b != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(c + '0');
	}
	else if (c >= 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
