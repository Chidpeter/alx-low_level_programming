#include "main.h"

/**
 * _isalpha - Checks for presence of any alphabets
 * @c: This is the char to be checked
 * Return: Always 1 if successful, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
