#include "lists.h"

/**
 * print_listint_safe  - prints all the elements of a listint_t list
 * @head: pointer to a listint_t list
 *
 * Return: size_t, number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = head;
	size_t i = 0;

	if (current == NULL)
		exit(98);
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)&current, current->n);
		i++;
		current = current->next;
	}
	return (i);
}
