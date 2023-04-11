#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - searches for a value in a sorted sub-array of integers
 *                 using the Binary search algorithm
 * @array: a pointer to the first element of the sub-array to search in
 * @low: the index of the first element of the sub-array
 * @high: the index of the last element of the sub-array
 * @value: the value to search for
 *
 * Return: the index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = (low + high) / 2;

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}

	return (-1);
}
