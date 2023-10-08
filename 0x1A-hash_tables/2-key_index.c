#include "hash_tables.h"
/**
 * key_index - function to get key index & value
 * @key: value to index search.
 * @size: Size of hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
