#include "lists.h"
/**
 * get_dnodeint_at_index - Function that print the nth node
 * of a doubly linked list.
 * @head: It's a pointer that pointe the list.
 * @index: It's a number that print.
 * Return: return the nth node in end.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0 ; j < index; j++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
