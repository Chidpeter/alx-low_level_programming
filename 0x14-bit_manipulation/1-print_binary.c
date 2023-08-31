#include "main.h"

/**
 * print_binary - this fn prints the binary equivalent of a decimal number
 * @n: this is the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;

		if (a & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
