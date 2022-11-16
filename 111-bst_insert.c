#include "binary_trees.h"

/**
 * bst_insert - insert a node to bst tree
 *
 * @tree: the root node of  the bst tree
 * @value: value to be added
 * Return: pointer to the root node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value == (*tree)->n)
		return (node);

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			node = binary_tree_node(*tree, value);
			(*tree)->left = node;
		}
		else
			node = bst_insert(&((*tree)->left), value);
	}
	else
	{
		if ((*tree)->right == NULL)
		{
			node = binary_tree_node(*tree, value);
			(*tree)->right = node;
		}
		else
			node = bst_insert(&((*tree)->right), value);
	}
	return (node);
}
