#include "main.h"

/**
 * _pow_recursion - a fn returns value of x raised to pow of y
 * @x: input value
 * @y: power
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
