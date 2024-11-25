#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, zero, or negative
 * @i: The integer to evaluate
 *
 * Description: Prints whether the given integer is
 * positive, zero, or negative.
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
}
