#include "binary_trees.h"

/**
 * array_to_bst - converts and array to binary search tree
 *
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * Return: Pointer to the root node of the created BST or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *bst = NULL;

	while (size > 0)
	{
		bst_insert(&bst, *(array++));
		size--;
	}
	return (bst);
}
