#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: less or more than 5
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (last > 5)
		printf("the last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)
		printf("the last digit of %d is %d and is 0", n, last);
	else
		printf("the last digit of %d is %d and is less than 6 and not 0", n, last);
	return (0);
}
