#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t lst to be frd
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}