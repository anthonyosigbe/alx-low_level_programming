#include "../search_algos.h"

/**
 * free_skiplist - Releases the memory allocated for a skip list
 *
 * @list: Pointer to the skip list to be deallocated
 */

void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
