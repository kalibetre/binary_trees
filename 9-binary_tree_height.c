#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: the binary tree
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	height = l_height > r_height ? l_height : r_height;

	if (tree->left != NULL || tree->right != NULL)
		height++;

	return (height);
}
