#include "binary_trees.h"

/**
 * bst_search - search for a value in binary search tree
 *
 * @tree: the root node to a bst
 * @value: value to be searched
 * Return: node containing the value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
