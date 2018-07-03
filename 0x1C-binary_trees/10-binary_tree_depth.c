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

/**
 * binary_tree_depth - measures depth
 * @tree: pointer to node to measure depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (binary_tree_is_root(tree) != 1)
	{
		count++;
		tree = (tree)->parent;
	}
	return (count);
}
