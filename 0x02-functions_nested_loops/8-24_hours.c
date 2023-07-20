#include "main.h"

/**
 * jack_bauer - The function to print minutes of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
	for (m = h + 1; m < 60; m++)
	{
	_putchar(h / 10 + '0');
	_putchar(h % 10 + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar('\n');
	}
	}
}
