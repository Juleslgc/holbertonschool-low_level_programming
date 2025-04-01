#include "lists.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: It's a char.
 * Return: return 0 in end.
 */

int _strlen(const char *s)
{
	int a = 0;

	for (; *s != '\0' ; s++)

	a++;

	return (a);
}

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: It's a pointer that pointe the end the list.
 * @str: It's a pointer that pointe the new node.
 * Return: return new node in end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
