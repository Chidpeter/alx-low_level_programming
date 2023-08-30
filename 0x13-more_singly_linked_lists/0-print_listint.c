#include "lists.h"

/**
 * print_listint - this function prints all the elements of list
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodecounter = 0;

	while (h)
	{
	printf("%d\n", h->n);
	nodecounter++;
	h = h->next;
	}
	return (nodecounter);
}
