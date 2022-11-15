#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the root node of the binary tree
 *
 * Return: 1 if it is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full, has_l, has_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	has_l = tree->left != NULL ? 1 : 0;
	has_r = tree->right != NULL ? 1 : 0;
	if (has_l != has_r)
		return (0);

	l_full = binary_tree_is_full(tree->left);
	r_full = binary_tree_is_full(tree->right);

	return (l_full + r_full == 2 ? 1 : 0);
}
