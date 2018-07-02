#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node that needs to be checked
 * Return: 0 if node is null or not root, else 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
