#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: array
 * @size: nbr of elements to print
 * @action: pointerto print hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

