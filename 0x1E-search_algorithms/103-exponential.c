#include "search_algos.h"

/**
 * binary_search2 - Searches for a value in a sorted array
 *	using Binary search algorithm
 * @array: Pointer to the first element of the array
 * @low: Lower index of the search range
 * @high: Upper index of the search range
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */
int binary_search2(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *	using Exponential search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
		bound >= size ? size - 1 : bound);

	return (binary_search2(array, bound / 2, bound >= size ? size - 1 : bound,
		value));
}
