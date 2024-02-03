#include "lists.h"

/**
* get_dnodeint_at_index - a function that returns the
* nth node of a dlistint_t linked lit
* @head: the head of the list
* @index: the index of the nth node
* Return: the nth nod
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
