#include "lists.h"

/**
 * free_list - program frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
