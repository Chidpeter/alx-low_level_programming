#include "main.h"

/*
 * _isupper - Function to check for UPPERCASE letters
 * @c: Char to be checked for
 * Return: Always 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
