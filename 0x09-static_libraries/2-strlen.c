#include "main.h"

/**
 * _strlen - A function that checks the length of a string
 * @s: The string to be checked
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
	a++;
	s++;
	}
	return (a);
}
