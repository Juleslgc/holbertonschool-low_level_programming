#include "lists.h"
#include <stdio.h>
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
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: It's a pointer that pointe the beginning the list.
 * @str: It's a pointer that pointe the new node.
 * Return: return in end.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
