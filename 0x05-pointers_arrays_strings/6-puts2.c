#include "main.h"

/**
 * puts2 - a function that prints every character of a string
 * @str: The string to be printed
 * Return: always 0
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;
	int d;
	char *c = str;

	while (*c != '\0')
	{
	c++;
	a++;
	}
	b = a - 1;
	for (d = 0; d <= b; d++)
	{
	if (d % 2 == 0)
	{
	_putchar(str[d]);
	}
	}
	_putchar('\n');
}

