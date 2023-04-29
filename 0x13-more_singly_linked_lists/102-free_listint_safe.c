#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (!h)
		return (count);

	current = *h;
	while (current)
	{
		count++;
		if (current <= current->next)
		{
			*h = NULL;
			free(current);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}

