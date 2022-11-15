#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node of a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: the depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
