#include "lists.h"
/**
 * list_len - Function return the number of elements in a linked list_t list.
 * @h: It's a pointer that points to the first node.
 * Return: return the number of node in the list.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
