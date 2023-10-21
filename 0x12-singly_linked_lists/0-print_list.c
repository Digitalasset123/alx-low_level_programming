#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the list
 * Return: total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}

