#ifndef _SEARCH_ALGO_H
#define _SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, int start, int end);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
