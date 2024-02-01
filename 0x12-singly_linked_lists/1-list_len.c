#include "lists.h"

/**
 * list_len - get the number of elements in a linked list
 * @h: const pointer to a list_t
 *
 * Return: size_t, the length of a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t i = 0;

	current = h;
	while(current != NULL)
	{
		i++;
		current = (*current).next;
	}
	return (i);
}
