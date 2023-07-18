#include <stdio.h>

/**
 * main - A program that prints combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	for (c = a + 2; c < 10; c++)
	{
	if (a == b && a == c)
	{
	continue;
	}
	if (a == b || a == c || b == c)
	{
	continue;
	}
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
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
