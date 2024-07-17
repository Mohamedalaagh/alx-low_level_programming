#include "search_algos.h"

/**
 * jump_search - searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: input array
 * @size: number of elements in array
 * @value: value to search for in the array
 *
 * Return: the first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, j = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		for (j = low; j <= high; j++)
		{
			if (j < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
