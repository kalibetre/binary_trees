#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 *
 * @tree: the binary tree
 * Return: the root node to the rotated binary tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp_r;

	if (tree == NULL)
		return (NULL);

	if (tree->right == NULL)
		return (tree);

	temp_r = tree->right->left;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree = tree->right;
	tree->left->right = temp_r;
	if (temp_r != NULL)
		temp_r->parent = tree->left;
	tree->parent = NULL;
	return (tree);
}
