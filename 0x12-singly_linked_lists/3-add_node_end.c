#include "lists.h"

/**
 * add_nodeint_end - program adds a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
list_t *add_nodeint_end(list_t **head, const int n)
{
	list_t *new;
	list_t *temp;

	(void)temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
