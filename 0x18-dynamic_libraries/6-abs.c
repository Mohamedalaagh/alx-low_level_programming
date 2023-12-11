#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: num is an integer
 *
 * Return: integer
 */
int _abs(int num)
{
    if (num > 0)
    {
        return (num);
    }
    else if (num < 0)
    {
        return (-num);
    }
    else
    {
        return (num);
    }
}

