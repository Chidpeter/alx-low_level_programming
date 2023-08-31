#include "main.h"

/**
 * binary_to_uint - this function converts binary to an unsigned int
 * @b: this is a pointer to a str of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (a = 0; b[i]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		c = 2 * c + (b[a] - '0');
	}

	return (c);
}
	
