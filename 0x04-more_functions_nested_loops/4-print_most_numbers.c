#include "main.h"

/**
 * print_most_numbers - Print numbers without 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
	if (c == 50 || c == 50)
	{
	continue;
	}
	_putchar(c);
	}
	_putchar('\n');
}
