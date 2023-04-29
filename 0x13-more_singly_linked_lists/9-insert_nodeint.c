#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head node of the linked list.
 * @idx: Index where the new node should be added.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	for (i = 0; i < idx - 1 && node != NULL; i++)
	{
		node = node->next;
	}

	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}

