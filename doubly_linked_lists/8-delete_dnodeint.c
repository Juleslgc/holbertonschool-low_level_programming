#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the nodes of the list.
 * @head: It's a pointer that pointe head list.
 * @index: It's the position where a delete a node.
 * Return: return 1 if it succeeded or -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		return (1);
	}
	for (i = 0 ; temp != NULL && i < index ; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

	return (1);
}
