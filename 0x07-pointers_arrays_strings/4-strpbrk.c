#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s) {
        const char *a = accept;
        while (*a) {
            if (*s == *a) {
                return s;
            }
            a++;
        }
        s++;
    }
    return NULL;
}
