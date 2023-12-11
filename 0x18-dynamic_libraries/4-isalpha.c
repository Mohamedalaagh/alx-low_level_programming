#include "main.h"
/**
 * _isalpha - returns 1 if ch is a letter
 * @ch: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int ch)
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return (1);
    }
    return (0);
}
