#include "search_algos.h"


/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search in.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: return the first index where value is located,
  *     or -1 if not found
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, j;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		i = (l + r) / 2;
		printf("Searching in array: ");
		for (j = l; j <= r; j++)
		{
			printf("%d", array[j]);
			if (j != r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			l = i + 1;
		}
		else if (array[i] > value)
		{
			r = i - 1;
		}
	}
	return (-1);
}
