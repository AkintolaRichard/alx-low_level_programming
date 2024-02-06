#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list
 * @h: const pointer to a listint_t
 *
 * Return: size_t, the length of a linked list
 */
size_t listint_len(const listint_t *h)
{
        const listint_t *current;
        size_t i = 0;

        current = h;
        while(current != NULL)
        {
                i++;
                current = (*current).next;
        }
        return (i);
}
