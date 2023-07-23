#include <stdio.h>

/**
 * main - A program that prints combination of two digit codes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 100)
	{
	b = a + 1;
	while (b < 100)
	{
	putchar(a / 10 + '0');
	putchar(a % 10 + '0');
	putchar(' ');
	putchar(b / 10 + '0');
	putchar(b % 10 + '0');
	if (a != 98 || b != 99)
	{
	putchar(',');
	putchar(' ');
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
