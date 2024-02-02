#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
