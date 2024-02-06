#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to a pointer to a listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
        listint_t *temp;

        while (*head != NULL)
        {
		temp = (*head)->next;
		free(*head);
                *head = temp;
        }
}
