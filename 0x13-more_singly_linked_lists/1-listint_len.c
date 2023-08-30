#include "lists.h"

/**
 * listint_len - this function returns num of elements
 * @h: this is the pointer to listint_t
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (number);
}
