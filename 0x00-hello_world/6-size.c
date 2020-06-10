#include <stdio.h>
/**
 * main - Prints "Size of diferent types"
 *
 * Return: 0
 */
int main() 
{ 
printf("Size of char: %lu\n", sizeof(char)); 
printf("Size of an in: %lu\n", sizeof(int));
printf("Size of a long int: %li\n", sizeof(long int)); 
printf("Size of a long long int: %lli\n", sizeof(long long int));
printf("Size of float: %lu\n", sizeof(float));  
return 0; 
} 
