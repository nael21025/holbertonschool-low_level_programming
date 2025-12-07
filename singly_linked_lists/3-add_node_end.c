#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - creates a new list_t node
 * @str: string to duplicate and store in the node
 *
 * Return: pointer to the new node, or NULL on failure
 */
static list_t *create_node(const char *str)
{
	list_t *new_node;
	char *dup;
	unsigned int len = 0;

	if (str != NULL)
	{
		dup = strdup(str);
		if (dup == NULL)
			return (NULL);

		while (str[len] != '\0')
			len++;
	}
	else
	{
		dup = NULL;
		len = 0;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup);
		return (NULL);
	}

	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of a pointer to the first node of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
