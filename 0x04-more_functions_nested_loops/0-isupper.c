#include "main.h"

/**
 * _isupper - this function checks for UPPERCASE characters
 * @c: Variable for the char to be checked
 * Return: Always 1 if uppercase, 0 otherwise
 */

int _isupper(int c) /* Prototype to check for uppercase char */
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
