#include "lists.h"
/**
 * free_dlistint - Function that free a list.
 * @head: It's a pointer that pointe the list.
 * Return: return void in end.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
