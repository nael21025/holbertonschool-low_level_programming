#include "hash_tables.h"

/**
 * create_node - creates a new hash node
 * @key: key string (will be duplicated)
 * @value: value string (will be duplicated)
 *
 * Return: pointer to the new node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value ? value : "");
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: hash table
 * @key: key (cannot be an empty string)
 * @value: value associated with the key (duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	/* Update case if key already exists */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value ? value : "");
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}

	/* Insert new node at the beginning of the list (chaining) */
	tmp = create_node(key, value ? value : "");
	if (tmp == NULL)
		return (0);

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;

	return (1);
}
