#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, half;
	int res, idx = -1;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);
	half = (size - 1) / 2;
	if (array[half] == value)
	{
		if (half == 0 || array[half - 1] != value)
			return (half);
	}

	if (array[half] < value)
	{
		idx = advanced_binary(array + half + 1,
				size - half - 1, value);
		if (idx != -1)
			idx += half + 1;
	}
	else
	{
		res = advanced_binary(array, half + 1, value);
		if (res != -1)
			idx = res;
	}

	if (idx != -1)
		printf("Found %d at index: %d\n", value, idx);
	return (idx);
}
