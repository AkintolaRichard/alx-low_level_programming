#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to a listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
        listint_t *current, *temp = *head;

        while (temp != NULL)
        {
                current = (*head)->next;
                if (current != NULL)
                        free(temp);
                temp = current;
        }
	*head = NULL;
}
