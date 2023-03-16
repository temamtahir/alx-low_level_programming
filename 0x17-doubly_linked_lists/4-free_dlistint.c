#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list with only int data, no strings
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *mhead)
{
	if (!mhead)
		return;

	while (mhead && mhead->next)
	{
		mhead =mhead->next;
		free(mhead->prev);
	}
	free(head);
}
