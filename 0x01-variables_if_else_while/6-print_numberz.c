#include <stdio.h>

/**
 * main - A program that prints single base 10 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; ++b)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
