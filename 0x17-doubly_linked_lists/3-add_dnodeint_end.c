#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mnew, *mlast;

	mnew = malloc(sizeof(dlistint_t));
	if (mnew == NULL)
		return (NULL);

	mnew->n = n;
	mnew->next = NULL;

	if (*head == NULL)
	{
		mnew->prev = NULL;
		*head = mnew;
		return (mnew);
	}

	mlast = *head;
	while (mlast->next != NULL)
		mlast = mlast->next;
	mlast->next = mnew;
	mnew->prev = mlast;

	return (mnew);
}
