#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node
 * at a given position.
 * @h: It's pointer that pointe a new node.
 * @idx: It's the position where the new node will be located in the list.
 * @n: It's the data to node.
 * Return: return the adress of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i;
	/*Insertion au début si idx = 0*/
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/*Parcours de la liste jusqu'à l'index - 1*/
	for (i = 0 ; temp != NULL && i < idx - 1 ; i++)
	{
		temp = temp->next;
	}
	/*Vérifie si l'index est hors limite*/
	if (temp == NULL)
	{
		return (NULL);
	}
	/*Insertion à la fin si l'emplacement = NULL */
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
