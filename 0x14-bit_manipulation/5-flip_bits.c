#include "main.h"
/**
 * flip_bits - function that return the number of the bits
 * required to convert one num to another
 * @n: the first num
 * @m: the seconed num
 *
 * Return: number of bits should be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int j = 0;

	for (i = 0; i <= 31; i++)
	{
		if ((n ^ m) & (1 << i))
			j++;
	}
	return (j);
}
