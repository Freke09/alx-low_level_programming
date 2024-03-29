#include "lists.h"


/**
* dlistint_len - a function that returns the number of elements in a
* linked list
* @h: pointer to the head of the list
* Return: the number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
