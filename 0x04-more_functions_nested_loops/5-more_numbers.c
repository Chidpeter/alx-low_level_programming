#include "main.h"

/**
 * more_numbers - prints numbers
 * Return: Always 0
 */

int more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 10; b++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a > 9)
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	}
	_putchar('\n');
	}
	return (0);
}
