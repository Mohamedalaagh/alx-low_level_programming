#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @source: source.
 * @n: amount of bytes used from source.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *source, int n)
{
    int space1 = 0, space2 = 0;

    while (*(dest + space1) != '\0')
    {
        space1++;
    }

    while (space2 < n)
    {
        *(dest + space1) = *(source + space2);
        if (*(source + space2) == '\0')
            break;
        space1++;
        space2++;
    }
    return dest;
}

