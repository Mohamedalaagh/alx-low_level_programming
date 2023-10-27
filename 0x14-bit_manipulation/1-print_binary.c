#include "main.h"
#include <stdio.h>
unsigned long int bin_num(unsigned long int num);
/**
 * print_binary - to convert the binary into decimal
 * @n: the binary number
 *
 * Return : void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = bin_num(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i > 0)
	{
		if (n & (1 << (i - 1)))
		_putchar('1');
		else
		_putchar('0');
		i--;
	}
}
/**
 * bin_num - function that return the number of bits
 * @num : the number that i want to get the number of the bits
 *
 * Return: the number of the bits in the digit
 */
unsigned long int bin_num(unsigned long int num)
{
	unsigned long int i = 1, j = 0;

	while (i <= num)
	{
		i *= 2;
		j++;
	}
	return (j);
}
