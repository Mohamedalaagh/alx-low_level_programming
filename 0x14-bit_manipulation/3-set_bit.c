#include "main.h"
/**
 * set_bit - function that chang the bit at givin index into 1
 * @n : the pointer to an int which is the number
 * @index : the index in which the bit will be change
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
