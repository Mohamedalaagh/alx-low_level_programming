#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i = 0;
    hash_node_t *tv;

    if (ht == NULL || key == NULL)
        return (NULL);

    i = key_index((const unsigned char *)key, ht->size);
    tv = ht->array[i];

    for (; tv != NULL; tv = tv->next)
    {
        if (strcmp(tv->key, key) == 0)
            return (tv->value);
    }
    return (NULL);
}

