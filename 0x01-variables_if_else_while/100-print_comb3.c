#include <stdio.h>

/**
 * main - A program that prints two digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	if (a == b)
	{
	continue;
	}
	putchar(a + '0');
	putchar(b + '0');
	if (a == 8 && b == 9)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
