#include "main.h"

/**
 * _strcat - appends source to the dest string
 * @dest: string to append by source
 * @source: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *source)
{
    int i, j;

    i = j = 0;
    while (*(dest + i))
        i++;
    while ((*(dest + i) = *(source + j)))
    {
        i++;
        j++;
    }
    return (dest);
}

