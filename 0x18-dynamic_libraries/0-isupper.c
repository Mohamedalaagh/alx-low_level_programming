#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if ch is upper
 *
 * @ch: input for character
 *
 * Return: 1 if it's uppercase, 0 if not
 */

int _isupper(int ch)
{
    if (ch >= 65 && ch <= 90)
        return (1);
    else
        return (0);
}
