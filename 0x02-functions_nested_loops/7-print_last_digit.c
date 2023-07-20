#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last number we need
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	n = -n;

	if (a < 0)
	a = -a;

	_putchar(a + '0');
	return (a);
}
