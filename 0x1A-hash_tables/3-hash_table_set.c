#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *nnode = NULL;
    hash_node_t *cnode = NULL;
    unsigned long int i;

    if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
        return (0);
    i = key_index((unsigned char *)key, ht->size);
    cnode = ht->array[i];

    for (; cnode != NULL; cnode = cnode->next)
    {
        if (strcmp(cnode->key, key) == 0)
        {
            if (strcmp(cnode->value, value) != 0)
            {
                free(cnode->value);
                cnode->value = strdup(value);
            }
            return (1);
        }
    }

    nnode = _node_(key, value);
    if (nnode == NULL)
        return (0);
    nnode->next = ht->array[i];
    ht->array[i] = nnode;
    return (1);
}
hash_node_t *_node_(const char *key, const char *value)
{
    hash_node_t *nnode;

    if (key == NULL || strcmp(key, "") == 0 || value == NULL)
        return (NULL);

    nnode = malloc(sizeof(hash_node_t));

    if (nnode == NULL)
        return (NULL);

    nnode->key = strdup(key);

    if (nnode->key == NULL)
    {
        free(nnode);
        return (NULL);
    }

    nnode->value = strdup(value);

    if (nnode->value == NULL)
    {
        free(nnode->key);
        free(nnode);
        return (NULL);
    }

    nnode->next = NULL;
    return (nnode);
}

