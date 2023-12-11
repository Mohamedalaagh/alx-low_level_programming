#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @ch: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int ch)
{
    if (ch >= 48 && ch <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
