#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in DLL
 * @h: A node for the DLL
 *
 * Return: no of elements in a DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
