#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char marker = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			if (marker == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			marker = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
