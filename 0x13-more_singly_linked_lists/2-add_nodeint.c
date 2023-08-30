#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning
 * @head: pointer to the first node
 * @n: this is the data in the node
 * 
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!new)
	return (NULL);

	newnode->n = n;
	newnode->next = head;
	*head = newnode;

	return (newnode);
}
	
