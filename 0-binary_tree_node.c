#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the node
 * @value: the value of the node
 *
 * Return: a binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
