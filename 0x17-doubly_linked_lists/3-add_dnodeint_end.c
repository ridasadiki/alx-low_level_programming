#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the doubly linked list
 * @n: value of the node to add
 * Return: new pointer
 * done by Rida
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cur = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;

		if (!(*head))
			*head = new;
		else
		{
			while (cur->next)
				cur = cur->next;
			cur->next = new;
			new->prev = cur;
		}
	}
	return (new);
}
