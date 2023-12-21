#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *t;
    unsigned long int i = 0, n = 0;

    if (ht == NULL)
        return;
    printf("{");

    for (i = n; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            t = ht->array[i];
            while (t)
            {
                printf("%s'%s': '%s'", n == 0 ? "" : ", ",
                       t->key, t->value), n++;
                t = t->next;
            }
        }
    }
    printf("}\n");
}

