#include "main.h"

/**
 * _islower - Checks for lowercase c in alphabets
 *
 * @c: this is the char to be checked
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
