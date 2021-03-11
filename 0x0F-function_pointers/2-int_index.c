#include "function_pointers.h"

/**
 * int_index - searches for an integer to compare on array
 * @array: array to evaluate
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: -1 if size <= 0 or no match : index of first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
