#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array that will search
 * @size: the size of the array
 * @value: the target value that search
 *
 * Return: Return the index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
		return (i);
	}
	}
	return (-1);
}
