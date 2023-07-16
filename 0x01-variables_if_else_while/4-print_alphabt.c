#include <stdio.h>

/**
 * main - Using putchar function to print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
	if (n == 'e' || n == 'q')
	continue;
	putchar(n);
	}
	putchar('\n');
	return (0);
}
