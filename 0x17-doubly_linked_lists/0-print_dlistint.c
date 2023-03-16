#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: node of the DLL
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (k);
}
