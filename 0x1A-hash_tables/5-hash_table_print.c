#include "hash_tables.h"

/**
 * hash_table_print - Print whole the hash table
 * @ht: Hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *current;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			flag = 1;
			while (current->next != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
			printf("'%s': '%s'", current->key, current->value);
		}
	}
	putchar('}');
	putchar('\n');
}
