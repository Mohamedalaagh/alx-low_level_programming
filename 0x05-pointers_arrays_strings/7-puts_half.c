#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int lio = 0;
	char *x = str;
	int l;
	int m;
	int n;
	
	m = strlen(str);
	if ( m % 2 == 0)
	{  
		n = m / 2;
	}
	else
	{
		n = (m-1)/2;
	}
	while (*x != '\0')
	{
		x++;
		lio++;
	}
	for (l= n ; l < lio ;l++)
	{ 
		_putchar(str[l]);
	}
	_putchar('\n');
}
