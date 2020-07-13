#include "dog.h"
/**
 * print_dog - function that prints a struct dog.
 * @d: struct to p´rint.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
