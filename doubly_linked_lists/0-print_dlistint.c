#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: It's a pointer that points to the first node.
 * Return: return the number of node in end.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		count++;
	}
	return (count);
}
