#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of byte to be allocated
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	exit(98);
	return (a);
}
