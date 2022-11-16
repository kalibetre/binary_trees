#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree to the right
 *
 * @tree: the binary tree
 * Return: the root node to the rotated binary tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp_l;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL)
		return (tree);

	temp_l = tree->left->right;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree = tree->left;
	tree->right->left = temp_l;
	if (temp_l != NULL)
		temp_l->parent = tree->right;
	tree->parent = NULL;
	return (tree);
}
