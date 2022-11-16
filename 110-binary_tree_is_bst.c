#include "binary_trees.h"

/**
 * _binary_tree_inorder - traverses a tree in in-order traversal
 *
 * @tree: pointer to the root node of a tree
 * @prev: pointer to the prev visited node
 * Return: 0 if it is bts otherwise -1
 */
int _binary_tree_inorder(const binary_tree_t *tree, const binary_tree_t *prev)
{
	int check = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->n <= tree->left->n)
		return (-1);

	check = _binary_tree_inorder(tree->left, prev);
	if (check < 0 || (prev != NULL && prev->n >= tree->n))
		return (-1);
	prev = tree;
	return (_binary_tree_inorder(tree->right, prev));
}

/**
 * binary_tree_is_bst - checks if a binary tree is Binary Search Tree
 *
 * @tree: the root node of a binary tree
 * Return: 1 if it is a BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (_binary_tree_inorder(tree, NULL) < 0)
		return (0);
	return (1);
}
