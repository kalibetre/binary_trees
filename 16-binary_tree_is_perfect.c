#include "binary_trees.h"

/**
 * binary_tree_left_most_depth - gets the depth of the left most child
 * @tree: the root node of the binary tree
 *
 * Return: depth of lett most child
 */
size_t binary_tree_left_most_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp = (binary_tree_t *)tree;

	while (temp->left != NULL)
	{
		depth++;
		temp = temp->left;
	}
	return (depth);
}

/**
 * _is_perfect - checks if a binary tree is perfect
 * @req_depth: the required depth to match
 * @depth: the depth of the left most child
 * @tree: the root node of the tree
 *
 * Return: 1 if it is perfect otherwise 0
 */
int _is_perfect(size_t req_depth, size_t depth, const binary_tree_t *tree)
{
	int is_perfect;

	if (tree->left == NULL && tree->right == NULL)
		return (depth != req_depth ? 0 : 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	is_perfect = _is_perfect(1 + req_depth, depth, tree->left);
	if (is_perfect != 0)
		is_perfect = _is_perfect(1 + req_depth, depth, tree->right);
	return (is_perfect);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the root node of the tree
 *
 * Return: 1 if it is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = binary_tree_left_most_depth(tree);
	return (_is_perfect(0, depth, tree));
}
