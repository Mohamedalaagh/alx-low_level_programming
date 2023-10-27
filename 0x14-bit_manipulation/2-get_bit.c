#include "main.h"

/**
 * get_bit - to get the bit at givin index
 * @n: the number
 * @index: the index
 *
 * Return: one  if bit 1, or zero if 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((1 << index) & n)
	{
		return (1);
	}
	else
		return (0);
}
