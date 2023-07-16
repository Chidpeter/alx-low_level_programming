#include <stdio.h>

/**
 * main - A program that prints the base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char s;

	s = 'a';
	for (n = '0'; n <= '9'; ++n)
	{
	putchar(n);
	}
	while (s <= 'f')
	{
	putchar(s);
	s++;
	}
	putchar('\n');
	return (0);
}
