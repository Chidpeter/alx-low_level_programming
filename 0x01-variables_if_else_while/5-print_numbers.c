#include <stdio.h>

/**
 * main - A program that prints base 10 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
