#include "binary_trees.h"

/**
 * _binary_tree_inorder - traverses a tree in in-order traversal
 *
 * @tree: pointer to the root node of a tree
 * @prev: pointer to the last visited node
 * Return: 1 if it is bts otherwise 0
 */
int _binary_tree_inorder(const binary_tree_t *tree, binary_tree_t **prev)
{
	int check = 0;

	if (tree == NULL)
		return (1);

	check = _binary_tree_inorder(tree->left, prev);
	if (check == 0 || (*prev != NULL && (*prev)->n >= tree->n))
		return (0);
	*prev = (binary_tree_t *)tree;
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
	binary_tree_t *prev = NULL;

	if (tree == NULL)
		return (0);

	return (_binary_tree_inorder(tree, &prev));
}
