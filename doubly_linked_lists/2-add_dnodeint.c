#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of a list.
 * @head: It's a pointer that pointe the beginning the list.
 * @n: It's a pointer that pointe the new node.
 * Return: return a new node in end.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
