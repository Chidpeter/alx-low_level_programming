#include <stdio.h>

/**
 * main - Using putchar function to print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	char c = 'A';

	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
