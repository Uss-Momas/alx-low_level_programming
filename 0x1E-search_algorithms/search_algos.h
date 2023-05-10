#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int min(int a, int b);
int interpolation_search(int *array, size_t size, int value);
#endif
