#include "lists.h"

/**
 * print_list - Function print all element of a list_t list.
 * @h: It's a pointer that points to the first node.
 * Return: return the number of node in the list.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
