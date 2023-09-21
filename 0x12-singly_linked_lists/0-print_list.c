#include "lists.h"

/**
* print_list - A functiom that prints all elements of a list
* @h: Pointer to the node
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("%s\n", h->str);
		}

		h = h->next;
		nodes++;
	}

	return (nodes);
}
