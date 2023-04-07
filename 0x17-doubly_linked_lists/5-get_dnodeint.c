#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of list
 * @index: index of the node we're getting
 * Return: NULL or node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int mcount = 0;

	if (temp == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (mcount == index)
			return (temp);
		mcount++;
		temp = temp->next;
	}
	return (NULL);
}
