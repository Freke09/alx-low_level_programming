#include "lists.h"

/**
* add_dnodeint_end - a function that adds a new node at the end of
* dlistint_t list
* @head: head of the list
* @n: value of the element
* Return: the address of the new element or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *d;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	d = *head;

	if (d != NULL)
	{
		while (d->next != NULL)
			d = d->next;
		d->next = new_node;

	}
	else
	{
		*head = new_node;
	}

	new_node->prev = d;

	return (new_node);

}
