#ifndef _SEARCH_ALGOS_HEADER
#define _SEARCH_ALGOS_HEADER

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - Structure for a singly linked list node
 *
 * @n: An integer value stored in the node
 * @index: The index of the node in the list
 * @next: A pointer to the next node in the list
 *
 * Description: Defines the structure for a node in a singly
 * linked list used in the 0x1E. C - Search Algorithms project.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
