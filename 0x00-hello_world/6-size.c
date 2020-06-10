#include <stdio.h>
/**
 * main - Prints "Size of diferent types"
 *
 * Return: 0
 */
int main(void)
{
printf("Size of char: %lu\n", sizeof(char));
printf("Size of an in: %lu\n", sizeof(int));
printf("Size of a long int: %lu\n", sizeof(long int));
printf("Size of a long long int: %lu\n", sizeof(long long int));
printf("Size of float: %lu", sizeof(float));
return (0);
}
