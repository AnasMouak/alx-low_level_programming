#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *	using Interpolation search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
