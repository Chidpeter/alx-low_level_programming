#include "main.h"

/**
 * _strlen_recursion - A fn that returns the length of a string
 * @s: The string
 *
 * Return: Length of s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
	length++;
	length += _strlen_recursion(s + 1);
	}
	return (length);
}
