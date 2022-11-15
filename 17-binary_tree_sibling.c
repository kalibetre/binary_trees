#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a node
 * @node: a pointer to the node to find sibling
 *
 * Return: returns a pointer to the sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
