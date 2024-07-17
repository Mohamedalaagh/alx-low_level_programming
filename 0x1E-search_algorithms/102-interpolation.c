#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: input array
 * @size: number of elements in array
 * @value: value to search for in the array
 *
 * Return: the first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t k = 0;

	if (array != NULL)
	{
		while ((array[high] != array[low]) &&
		       (value >= array[low]) &&
		       (value <= array[high]))
		{
			k = low + (((double)(high - low) / (array[high] - array[low])) *
				     (value - array[low]));
			printf("Value checked array[%lu] = [%d]\n", k, array[k]);
			if (array[k] < value)
				low = k + 1;
			else if (value < array[k])
				high = k - 1;
			else
				return (k);
		}
		if (value == array[low])
			return (low);
		k = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", k);
	}
	return (-1);
}
