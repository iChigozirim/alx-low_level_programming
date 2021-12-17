#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the hash table.
 *
 * Return: If function is not successful - NULL.
 *         Otherwise - pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
