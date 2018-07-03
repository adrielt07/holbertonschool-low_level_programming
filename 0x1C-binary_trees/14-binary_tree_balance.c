#include "binary_trees.h"
/**
 * is_parent - checks if node is a parent
 * @node: pointer to node that will be checked
 * Return: 1 if node is a parent, else 0
 */
int is_parent(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left != NULL || node->right != NULL)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_nodes - count how many nodes have atleast 1 child
 * @tree: pointer to node to measure depth
 * Return: return number of parents, else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	if (is_parent(tree) == 1)
		return (count + 1);
	return (count);
}
