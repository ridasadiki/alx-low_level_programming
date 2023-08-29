#include "lists.h"
/**
 * reverse_listint - reverses a linkd lst
 * @head: point the first node in the lst
 * Return: point the first node in the nw lst
 * sign by Rida
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
