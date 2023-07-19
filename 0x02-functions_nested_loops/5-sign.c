#include "main.h"

/**
 * print_sign - A function that prints the sign of an int
 * @n: the int that will be checked
 * Return: Always 1 if its positive, -1 if its negative
 */

int print_sign(int n)
{
	if (n > 1)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
