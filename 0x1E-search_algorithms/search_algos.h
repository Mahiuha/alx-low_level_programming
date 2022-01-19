#ifndef CHRONICLE
#define CHRONICLE

#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t left, size_t right, int value);
int jump_search(int *array, size_t size, int value);
/*int interpolation_search(int *array, size_t size, int value);*/
/*int exponential_search(int *array, size_t size, int value);*/
int advanced_binary(int *array, size_t size, int value);
/*listint_t *jump_list(listint_t *list, size_t size, int value);*/
/*skiplist_t *linear_skip(skiplist_t *list, int value);*/

#endif
