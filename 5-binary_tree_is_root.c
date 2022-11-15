#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a parent node
 * @node: the node to be checked
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
