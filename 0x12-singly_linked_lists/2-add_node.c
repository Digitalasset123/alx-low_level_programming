#include "lists.h"

/* Function prototype for len */
int len(const char *str);

/**
 * add_node - add a node to the beginning of the list
 * @head: pointer to the head of the list
 * @str: string to be inserted to the first position
 * Return: pointer to the first node (newly assigned one)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;

	return (*head);
}

/**
 * len - get the lenght of the string (str)
 * @str: the string to get its lenght
 * Return: Lenght of the string
 */

int len(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

