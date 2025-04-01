#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in a list.
 * @h: It's a pointer that points to the first node.
 * Return: return the number of the node in end.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
