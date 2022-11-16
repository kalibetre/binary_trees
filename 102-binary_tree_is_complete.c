#include "binary_trees.h"

/**
 * _binary_tree_size - returns the size of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: the size of the binary tree
 */
size_t _binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);

	l_size = _binary_tree_size(tree->left);
	r_size = _binary_tree_size(tree->right);
	return (1 + l_size + r_size);
}

/**
 * _is_complete - checks if a binary tree is complete
 *
 * @tree: Pointer to the node of the tree
 * @index: Current index
 * @count: Tree node count
 * Return: 1 if complete otherwise 0
 */
int _is_complete(const binary_tree_t *tree, int index, int count)
{
	if (tree == NULL)
		return (1);

	if (index >= count)
		return (0);

	return (_is_complete(tree->left, 2 * index + 1, count) &&
			_is_complete(tree->right, 2 * index + 2, count));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: Pointer to the root node of a tree
 * Return: 1 if it is complete otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = _binary_tree_size(tree);
	return (_is_complete(tree, 0, count));
}
