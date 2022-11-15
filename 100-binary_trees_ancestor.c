#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *p_first, *p_second;

	if (first == NULL || second == NULL)
		return (NULL);

	p_first = (binary_tree_t *)first->parent;
	p_second = (binary_tree_t *)second->parent;

	if (p_first == second)
		return (p_first);

	if (p_second == first)
		return (p_second);

	while (p_first != NULL)
	{
		while (p_second != NULL)
		{
			if (p_first == p_second)
				return (p_first);
			p_second = p_second->parent;
		}
		p_first = p_first->parent;
	}

	return (NULL);
}
