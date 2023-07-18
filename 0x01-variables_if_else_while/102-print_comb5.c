#include <stdio.h>

/**
 * main - A program that prints combination of two digit codes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
	for (b = a + 1; b < 100; b++)
	{
	if (a == b)
	{
	continue;
	}
	if (a % 10 == b / 10 && a / 10 < b % 10)
	{
	putchar(a / 10 + '0');
	putchar(a % 10 + '0');
	putchar(' ');
	putchar(b / 10 + '0');
	putchar(b % 10 + '0');
	if (a == 99 && b == 99)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
