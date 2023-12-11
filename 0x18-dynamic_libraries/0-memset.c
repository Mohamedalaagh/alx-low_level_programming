#include "main.h"

/**
 * _memset - fill memory with constant values
 * @s: pointer to char params
 * @b: constant bytes
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int j;

    for (j = 0; j < n; j++)
    {
        s[j] = b;
    }
    return (s);
}

