#include "lists.h"

/**
 * print_dlistint  - prints all the elements of a dlistint_t list
 * @h: pointer to a dlistint_t list
 *
 * Return: size_t, number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
