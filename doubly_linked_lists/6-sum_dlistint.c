#include "lists.h"
/**
 * sum_dlistint - Function that print the sum of all the data (n) of a list.
 * @head: It's a pointer that pointe the list.
 * Return: return sum of all to the list in end.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (; head != NULL ;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
