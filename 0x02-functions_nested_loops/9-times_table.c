#include "main.h"

/**
 * times_table - A function that prints times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a = 0;
	int b = 0;

	while (a <= 10)
	{
	b = 0;
	while (b <= 9)
	{
	if (a * b < 10)
	{
	if (b != 0)
	{
	_putchar(' ');
	_putchar(' ');
	}
	_putchar(a * b + '0');
	}
	else
	{
	_putchar(' ');
	_putchar(a * b / 10 + '0');
	_putchar(a * b % 10 + '0');
	}
	if (b != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	b++;
	}
	_putchar('\n');
	a++;
	}
}
