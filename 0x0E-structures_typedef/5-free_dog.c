#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs..
 * @d: dog to free.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
		free(d);
}
