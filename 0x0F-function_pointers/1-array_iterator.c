#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: array to iterate over it.
 * @size: size of array.
 * @action: function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
