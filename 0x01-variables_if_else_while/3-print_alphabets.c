#include <stdio.h>

/**
 * main - Using putchar function to print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';
	char c = 'A';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
