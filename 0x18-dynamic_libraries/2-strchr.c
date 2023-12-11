#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
    int obs = 0, bith;

    while (s[obs])
    {
        obs++;
    }

    for (bith = 0; bith <= obs; bith++)
    {
        if (c == s[bith])
        {
            s += bith;
            return (s);
        }
    }

    return ('\0');
}
