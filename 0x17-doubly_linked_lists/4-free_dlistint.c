#include "lists.h"

/**
* free_dlistint - a function that free a dlistint_t list
* @head: head of the pointer
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->next;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
