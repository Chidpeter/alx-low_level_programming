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
	if (n == '9')
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
