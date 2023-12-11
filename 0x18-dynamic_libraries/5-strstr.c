#include "main.h"

/**
 * _strstr - location of a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
    int abb = 0, b = 0;

    while (haystack[abb])
    {
        while (needle[b])
        {
            if (haystack[abb + b] != needle[b])
            {
                break;
            }

            b++;
        }

        if (needle[b] == '\0')
        {
            return (haystack + abb);
        }

        abb++;
    }

    return ('\0');
}

