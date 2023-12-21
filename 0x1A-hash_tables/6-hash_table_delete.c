#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *c = NULL;
    unsigned long int i = 0;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            while (ht->array[i])
            {
                c = ht->array[i];
                free(c->key);
                free(c->value);
                ht->array[i] = ht->array[i]->next;
                free(c);
            }
        }
    }
    free(ht->array);
    free(ht);
}

