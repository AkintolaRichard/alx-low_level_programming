#include "lists.h"

/**
 * print_listint  - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 *
 * Return: size_t, number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
