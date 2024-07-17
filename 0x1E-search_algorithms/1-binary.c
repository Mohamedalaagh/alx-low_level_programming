#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: number of elements in array
 * @value: value to search for in the array
 *
 * Return: the first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = 0;
	size_t j = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (j = left; j < right; j++)
			{
				printf("%d, ", array[j]);
			}
			printf("%d\n", array[j]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
