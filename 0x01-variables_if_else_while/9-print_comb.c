#include <stdio.h>

/**
 * main - A program that prints single numbers with commas and spaces
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	}
	return (0);
}
