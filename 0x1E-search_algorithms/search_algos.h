#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printL(int *array, size_t r);
void printR(int *array, size_t r, size_t l);

#endif /* SEARCH_ALGOS */
