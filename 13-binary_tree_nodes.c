#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: the root node of the tree
 *
 * Return: the count of the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_nodes, r_nodes;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);
	return (1 + l_nodes + r_nodes);
}
