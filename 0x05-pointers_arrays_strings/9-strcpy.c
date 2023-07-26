#include "main.h"

/**
 * _strcpy - A function that copies string
 * @dest: location to be copied to
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (*(src + a) != '\0')
	{
	a++;
	}
	for (b = 0; b < a; b++)
	{
	dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
