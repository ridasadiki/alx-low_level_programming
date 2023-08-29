#include "lists.h"
/**
 * pop_listint - dlts the head node of a linked list
 * @head: point the first element in the linked list
 * Return: data inside the elmnts that was dlt
 * or 0 if the lst is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
