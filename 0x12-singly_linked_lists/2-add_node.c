#include "lists.h"

/**
 * add_node - adds a new node at the beginning od a list_t list
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned i = 0;;

	while (str[i++])
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i - 1;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
