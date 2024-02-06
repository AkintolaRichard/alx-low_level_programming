#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a listimt_t list
 * @head: pointer to a pointer of listint_t list;
 * @n: int
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *current = *head;
        listint_t *new_node;

        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);
        new_node->n = n;
        new_node->next = NULL;

        if (*head == NULL)
        {
                *head = new_node;
                return (*head);
        }
        while (current->next != NULL)
                current = current->next;
        current->next = new_node;
        return (new_node);
}
