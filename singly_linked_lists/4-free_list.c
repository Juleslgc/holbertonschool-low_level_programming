#include "lists.h"
/**
 * free_list - Function that free the list.
 * @head: It's a pointer that pointe the list.
 * Return: return void in end.
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
